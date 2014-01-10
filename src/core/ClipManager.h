#ifndef CLIPMANAGER_H
#define CLIPMANAGER_H

#include "ofMain.h"
#include "../clips/Clip.h"

class ClipManager
{
    public:
        ClipManager();
        virtual ~ClipManager();

        void setup( Clip *clips, int *bnk_nr, int *blk_nr, int *clp_nr );

    protected:
    private:

        Clip *_clips;

        int* _bnk_nr;
        int* _blk_nr;
        int* _clp_nr;

};

#endif // CLIPMANAGER_H