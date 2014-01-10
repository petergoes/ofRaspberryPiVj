#include "InteractionAdapter.h"

InteractionAdapter::InteractionAdapter()
{
    // Button order of importance

    keymap[TL]  = 113;  // q
    keymap[TR]  = 101;  // e
    keymap[SL1] = 356;  // left arrow
    keymap[SR1] = 358;  // right arrow
    keymap[SL2] = 49;   // 1
    keymap[SR2] = 51;   // 3
    keymap[AL]  = 0;
    keymap[AR]  = 0;
    keymap[B1]  = 328;  // Numpad 8
    keymap[B2]  = 326;  // Numpad 6
    keymap[B3]  = 322;  // Numpad 2
    keymap[B4]  = 324;  // Numpad 4
    keymap[DU]  = 119;  // W
    keymap[DR]  = 100;  // D
    keymap[DD]  = 115;  // S
    keymap[DL]  = 97;   // A

}

InteractionAdapter::~InteractionAdapter()
{

}

//--------------------------------------------------------------
void InteractionAdapter::update() {

}

//--------------------------------------------------------------
void InteractionAdapter::keyPressed(int key){
    if (key == keymap[TL])  { pressedButtons[0]  = 1; }
    if (key == keymap[TR])  { pressedButtons[1]  = 1; }
    if (key == keymap[SL1]) { pressedButtons[2]  = 1; }
    if (key == keymap[SR1]) { pressedButtons[3]  = 1; }
    if (key == keymap[SL2]) { pressedButtons[4]  = 1; }
    if (key == keymap[SR2]) { pressedButtons[5]  = 1; }
    if (key == keymap[AL])  { pressedButtons[6]  = 1; }
    if (key == keymap[AR])  { pressedButtons[7]  = 1; }
    if (key == keymap[B1])  { pressedButtons[8]  = 1; }
    if (key == keymap[B2])  { pressedButtons[9]  = 1; }
    if (key == keymap[B3])  { pressedButtons[10] = 1; }
    if (key == keymap[B4])  { pressedButtons[11] = 1; }
    if (key == keymap[DU])  { pressedButtons[12] = 1; }
    if (key == keymap[DR])  { pressedButtons[13] = 1; }
    if (key == keymap[DD])  { pressedButtons[14] = 1; }
    if (key == keymap[DL])  { pressedButtons[15] = 1; }
}

//--------------------------------------------------------------
void InteractionAdapter::keyReleased(int key){
    buildPressedButtons(key);

    if (key == keymap[TL])  { pressedButtons[0]  = 0; }
    if (key == keymap[TR])  { pressedButtons[1]  = 0; }
    if (key == keymap[SL1]) { pressedButtons[2]  = 0; }
    if (key == keymap[SR1]) { pressedButtons[3]  = 0; }
    if (key == keymap[SL2]) { pressedButtons[4]  = 0; }
    if (key == keymap[SR2]) { pressedButtons[5]  = 0; }
    if (key == keymap[AL])  { pressedButtons[6]  = 0; }
    if (key == keymap[AR])  { pressedButtons[7]  = 0; }
    if (key == keymap[B1])  { pressedButtons[8]  = 0; }
    if (key == keymap[B2])  { pressedButtons[9]  = 0; }
    if (key == keymap[B3])  { pressedButtons[10] = 0; }
    if (key == keymap[B4])  { pressedButtons[11] = 0; }
    if (key == keymap[DU])  { pressedButtons[12] = 0; }
    if (key == keymap[DR])  { pressedButtons[13] = 0; }
    if (key == keymap[DD])  { pressedButtons[14] = 0; }
    if (key == keymap[DL])  { pressedButtons[15] = 0; }
}

//--------------------------------------------------------------
void InteractionAdapter::buildPressedButtons(int key){
    buttonMap.clear();

    if ( pressedButtons[0]  == 1 ) { buttonMap.push_back(TL);  }
    if ( pressedButtons[1]  == 1 ) { buttonMap.push_back(TR);  }
    if ( pressedButtons[2]  == 1 ) { buttonMap.push_back(SL1); }
    if ( pressedButtons[3]  == 1 ) { buttonMap.push_back(SR1); }
    if ( pressedButtons[4]  == 1 ) { buttonMap.push_back(SL2); }
    if ( pressedButtons[5]  == 1 ) { buttonMap.push_back(SR2); }
    if ( pressedButtons[6]  == 1 ) { buttonMap.push_back(AL);  }
    if ( pressedButtons[7]  == 1 ) { buttonMap.push_back(AR);  }
    if ( pressedButtons[8]  == 1 ) { buttonMap.push_back(B1);  }
    if ( pressedButtons[9]  == 1 ) { buttonMap.push_back(B2);  }
    if ( pressedButtons[10] == 1 ) { buttonMap.push_back(B3);  }
    if ( pressedButtons[11] == 1 ) { buttonMap.push_back(B4);  }
    if ( pressedButtons[12] == 1 ) { buttonMap.push_back(DU);  }
    if ( pressedButtons[13] == 1 ) { buttonMap.push_back(DR);  }
    if ( pressedButtons[14] == 1 ) { buttonMap.push_back(DD);  }
    if ( pressedButtons[15] == 1 ) { buttonMap.push_back(DL);  }

    cout << "Keys:";
    for(int i = 0; i < buttonMap.size(); i++){
        cout << " - " << ofToString(buttonMap[i]);
    }
    cout << endl;
}
