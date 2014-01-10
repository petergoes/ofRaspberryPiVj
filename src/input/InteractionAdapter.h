#include "ofMain.h"

#ifndef INTERACTIONADAPTER_H
#define INTERACTIONADAPTER_H

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


class InteractionAdapter
{
    public:
        InteractionAdapter();
        virtual ~InteractionAdapter();

        void update();
        void keyPressed(int key);
        void keyReleased(int key);

    private:
        vector<int> buttonMap;
        int keymap[403];
        int pressedButtons[16];

        void buildPressedButtons(int key);
};

#endif // INTERACTIONADAPTER_H
