#ifndef CLIPMANAGER_H
#define CLIPMANAGER_H

#include "ofMain.h"
#include "../clips/Clip.h"

#define DU  100
#define DR  101
#define DD  102
#define DL  103

#define B1  200
#define B2  201
#define B3  202
#define B4  203

#define SL1 300
#define SL2 301
#define SR1 302
#define SR2 303

#define AL  400
#define AR  401
#define TL  402
#define TR  403

class ClipManager
{
    public:
        ClipManager();
        virtual ~ClipManager();

        void setup( vector< vector< vector<Clip*> > > clips, int *bnk_nr, int *blk_nr, int *clp_nr );
        void changeClip( const vector<int> *clipSelectionMap );

    protected:
    private:

        vector< vector< vector<Clip*> > > _clips;

        int *_bnk_nr;
        int *_blk_nr;
        int *_clp_nr;

        void prevBank();
        void nextBank();
        bool destBankAvail( int* index );
        void activateBank( int index );

        void prevBlock();
        void nextBlock();
        void  nthBlock( int index );
        bool destBlockAvail( int* bank, int index );
        void activateBlock( int index );

        void prevClip();
        void nextClip();
        void  nthClip( int index );
        bool destClipAvail( int* bank, int* block, unsigned int index );
        void activateClip( int index );
};

#endif // CLIPMANAGER_H
