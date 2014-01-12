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

void ClipManager::changeClip( const vector<int> *clipSelectionMap )
{

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

void ClipManager::prevBank(){cout << "prev bank" << endl; }
void ClipManager::nextBank(){cout << "next bank" << endl;}

void ClipManager::prevBlock(){cout << "prev block" << endl;}
void ClipManager::nextBlock(){cout << "next block" << endl;}
void ClipManager::nthBlock( int index ){cout << "block: " << ofToString(index) << endl;}

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
