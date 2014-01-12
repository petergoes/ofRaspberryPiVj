#include "ClipManager.h"

ClipManager::ClipManager()
{
    //ctor
}

ClipManager::~ClipManager()
{
    //dtor
}

void ClipManager::setup( vector< vector< vector<Clip*> > > clips, int *bnk_nr, int *blk_nr, int *clp_nr )
{
    _clips = clips;

    _bnk_nr = bnk_nr;
    _blk_nr = blk_nr;
    _clp_nr = clp_nr;

    _clips[*_bnk_nr][*_blk_nr][*_clp_nr]->setup();
}

void ClipManager::changeClip( const vector<int> *clipSelectionMap ){

    if ( clipSelectionMap->size() <= 1 ) { return; }

    // Bank selection mode
    if ( clipSelectionMap->at(0) == TL && clipSelectionMap->at(1) == TR)
    {
        if ( clipSelectionMap->size() < 3 ) { return; }
        if ( clipSelectionMap->at(2) == SL1 ) { prevBank(); return; }
        if ( clipSelectionMap->at(2) == SR1 ) { nextBank(); return; }
        return;
    }

    // Clip selection mode
    if ( clipSelectionMap->at(0) == TL)
    {
        if ( clipSelectionMap->at(1) == SL1 ) { prevClip(); return; }
        if ( clipSelectionMap->at(1) == SR1 ) { nextClip(); return; }
        if ( clipSelectionMap->at(1) == B1  ) { nthClip(0); return; }
        if ( clipSelectionMap->at(1) == B2  ) { nthClip(1); return; }
        if ( clipSelectionMap->at(1) == B3  ) { nthClip(2); return; }
        if ( clipSelectionMap->at(1) == B4  ) { nthClip(3); return; }
        return;
    }

    // Block selection mode
    if ( clipSelectionMap->at(0) == TR)
    {
        if ( clipSelectionMap->at(1) == SL1 ) { prevBlock(); return; }
        if ( clipSelectionMap->at(1) == SR1 ) { nextBlock(); return; }
        if ( clipSelectionMap->at(1) == B1  ) { nthBlock(0); return; }
        if ( clipSelectionMap->at(1) == B2  ) { nthBlock(1); return; }
        if ( clipSelectionMap->at(1) == B3  ) { nthBlock(2); return; }
        if ( clipSelectionMap->at(1) == B4  ) { nthBlock(3); return; }
        return;
    }

    return;
}

void ClipManager::prevBank(){
    int destBank = *_bnk_nr - 1;
    if ( destBank == -1 )
    {
        destBank = _clips.size() - 1;
    }

    activateBank( destBank );
}
void ClipManager::nextBank(){
    int destBank = *_bnk_nr + 1;
    if ( destBank >= _clips.size() )
    {
        destBank = 0;
    }

    activateBank( destBank );
}
bool ClipManager::destBankAvail( int* index ){

    if ( _clips.size() > *index )
    {
        if ( destBlockAvail( index, 0) )
        {
            return true;
        } else
        {
            cout << "ClipManager::destBankAvail - Could not activate clips[" << ofToString(index) << "][0][0] because of bank index" << endl;
            return false;
        }
    } else
    {
        cout << "ClipManager::destBlockAvail - Could not activate clips[" << ofToString(index) << "][0][0] because of block index" << endl;
        return false;
    }
}
void ClipManager::activateBank( int index ){

    if ( destBankAvail(&index ) )
    {
        *_bnk_nr = index;
        *_blk_nr = 0;
        *_clp_nr = 0;
        _clips[*_bnk_nr][*_blk_nr][*_clp_nr]->setup();
        cout << "ClipManager::activateBank --- Activate Bank: clips[" << ofToString(*_bnk_nr) << "]" << endl;
    }
}

void ClipManager::prevBlock(){
    int destBlock = *_blk_nr - 1;
    if ( destBlock == -1 )
    {
        destBlock = _clips[*_bnk_nr].size() - 1;
    }

    activateBlock( destBlock );
}
void ClipManager::nextBlock(){
    int destBlock = *_blk_nr + 1;
    if ( destBlock >= _clips[*_bnk_nr].size() )
    {
        destBlock = 0;
    }

    activateBlock( destBlock );
}
void ClipManager::nthBlock( int index ){
    activateBlock( index );
}
bool ClipManager::destBlockAvail( int* bank, int index ){

    if ( _clips[*bank].size() > index )
    {
        if ( destClipAvail(bank, &index, 0) )
        {
            return true;
        } else
        {
            cout << "ClipManager::destBlockAvail - Could not activate clips[" << ofToString(*bank) << "][" << ofToString(index) << "][0] because of clip index" << endl;
            return false;
        }
    } else
    {
        cout << "ClipManager::destBlockAvail - Could not activate clips[" << ofToString(*bank) << "][" << ofToString(index) << "][0] because of block index" << endl;
        return false;
    }
}
void ClipManager::activateBlock( int index ){

    if ( destBlockAvail(_bnk_nr, index ) )
    {
        cout << "ClipManager::activateBlock --- Activate block: clips[" << ofToString(*_bnk_nr) << "][" << ofToString(index) << "]" << endl;
        *_blk_nr = index;
        *_clp_nr = 0;
        _clips[*_bnk_nr][*_blk_nr][0]->setup();
    }
}


void ClipManager::prevClip(){
    int destClip = *_clp_nr - 1;
    if ( destClip == -1 )
    {
        destClip = _clips[*_bnk_nr][*_blk_nr].size() - 1;
    }

    activateClip( destClip );
}
void ClipManager::nextClip(){
    int destClip = *_clp_nr + 1;
    if ( destClip >= _clips[*_bnk_nr][*_blk_nr].size() )
    {
        destClip = 0;
    }

    activateClip( destClip );
}
void ClipManager::nthClip( int index ){
    activateClip( index );
}
bool ClipManager::destClipAvail( int* bank, int* block, unsigned int index ){

    if ( _clips[*bank][*block].size() > index )
    {
        return true;
    } else
    {
        cout << "ClipManager::destClipAvail - Could not activate clips[" << ofToString(*bank) << "][" << ofToString(*block) << "][" << ofToString(index) << "] because of clip index" << endl;
        return false;
    }
}
void ClipManager::activateClip( int index ){

    if ( destClipAvail(_bnk_nr, _blk_nr, index ) )
    {
        *_clp_nr = index;
        _clips[*_bnk_nr][*_blk_nr][*_clp_nr]->setup();
    }
}
