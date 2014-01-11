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
}
