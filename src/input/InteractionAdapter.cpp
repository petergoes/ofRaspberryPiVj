#include "InteractionAdapter.h"

InteractionAdapter::InteractionAdapter(): clipSelectionMap(_clipSelectionMap)
{

    _keymap["TL"]  = 113;  // q
    _keymap["TR"]  = 101;  // e
    _keymap["SL1"] = 356;  // left arrow
    _keymap["SR1"] = 358;  // right arrow
    _keymap["SL2"] = 49;   // 1
    _keymap["SR2"] = 51;   // 3
    _keymap["AL"]  = 0;
    _keymap["AR"]  = 0;
    _keymap["B1"]  = 328;  // Numpad 8
    _keymap["B2"]  = 326;  // Numpad 6
    _keymap["B3"]  = 322;  // Numpad 2
    _keymap["B4"]  = 324;  // Numpad 4
    _keymap["DU"]  = 119;  // W
    _keymap["DR"]  = 100;  // D
    _keymap["DD"]  = 115;  // S
    _keymap["DL"]  = 97;   // A

    _pressedButtons.assign(16, false);

}

InteractionAdapter::~InteractionAdapter()
{

}

void InteractionAdapter::cleanKeymap()
{
    _buttonMap.clear();
}

void InteractionAdapter::cleanSelectionMap()
{
    _clipSelectionMap.clear();
}

//--------------------------------------------------------------
void InteractionAdapter::keyPressed(int key){

    // order of importance
    if (key == _keymap["TL"])  { _pressedButtons[0]  = true;}
    if (key == _keymap["TR"])  { _pressedButtons[1]  = true;}
    if (key == _keymap["SL1"]) { _pressedButtons[2]  = true;}
    if (key == _keymap["SR1"]) { _pressedButtons[3]  = true;}
    if (key == _keymap["SL2"]) { _pressedButtons[4]  = true;}
    if (key == _keymap["SR2"]) { _pressedButtons[5]  = true;}
    if (key == _keymap["AL"])  { _pressedButtons[6]  = true;}
    if (key == _keymap["AR"])  { _pressedButtons[7]  = true;}
    if (key == _keymap["B1"])  { _pressedButtons[8]  = true;}
    if (key == _keymap["B2"])  { _pressedButtons[9]  = true;}
    if (key == _keymap["B3"])  { _pressedButtons[10] = true;}
    if (key == _keymap["B4"])  { _pressedButtons[11] = true;}
    if (key == _keymap["DU"])  { _pressedButtons[12] = true;}
    if (key == _keymap["DR"])  { _pressedButtons[13] = true;}
    if (key == _keymap["DD"])  { _pressedButtons[14] = true;}
    if (key == _keymap["DL"])  { _pressedButtons[15] = true;}
}

//--------------------------------------------------------------
void InteractionAdapter::keyReleased(int key){
    buildPressedButtons(key);

    if (key == _keymap["TL"])  { _pressedButtons[0]  = false; }
    if (key == _keymap["TR"])  { _pressedButtons[1]  = false; }
    if (key == _keymap["SL1"]) { _pressedButtons[2]  = false; }
    if (key == _keymap["SR1"]) { _pressedButtons[3]  = false; }
    if (key == _keymap["SL2"]) { _pressedButtons[4]  = false; }
    if (key == _keymap["SR2"]) { _pressedButtons[5]  = false; }
    if (key == _keymap["AL"])  { _pressedButtons[6]  = false; }
    if (key == _keymap["AR"])  { _pressedButtons[7]  = false; }
    if (key == _keymap["B1"])  { _pressedButtons[8]  = false; }
    if (key == _keymap["B2"])  { _pressedButtons[9]  = false; }
    if (key == _keymap["B3"])  { _pressedButtons[10] = false; }
    if (key == _keymap["B4"])  { _pressedButtons[11] = false; }
    if (key == _keymap["DU"])  { _pressedButtons[12] = false; }
    if (key == _keymap["DR"])  { _pressedButtons[13] = false; }
    if (key == _keymap["DD"])  { _pressedButtons[14] = false; }
    if (key == _keymap["DL"])  { _pressedButtons[15] = false; }

}

//--------------------------------------------------------------
void InteractionAdapter::buildPressedButtons(int key){
    _buttonMap.clear();

    if ( _pressedButtons[0]  == 1 ) { _buttonMap.push_back(TL);  }
    if ( _pressedButtons[1]  == 1 ) { _buttonMap.push_back(TR);  }
    if ( _pressedButtons[2]  == 1 ) { _buttonMap.push_back(SL1); }
    if ( _pressedButtons[3]  == 1 ) { _buttonMap.push_back(SR1); }
    if ( _pressedButtons[4]  == 1 ) { _buttonMap.push_back(SL2); }
    if ( _pressedButtons[5]  == 1 ) { _buttonMap.push_back(SR2); }
    if ( _pressedButtons[6]  == 1 ) { _buttonMap.push_back(AL);  }
    if ( _pressedButtons[7]  == 1 ) { _buttonMap.push_back(AR);  }
    if ( _pressedButtons[8]  == 1 ) { _buttonMap.push_back(B1);  }
    if ( _pressedButtons[9]  == 1 ) { _buttonMap.push_back(B2);  }
    if ( _pressedButtons[10] == 1 ) { _buttonMap.push_back(B3);  }
    if ( _pressedButtons[11] == 1 ) { _buttonMap.push_back(B4);  }
    if ( _pressedButtons[12] == 1 ) { _buttonMap.push_back(DU);  }
    if ( _pressedButtons[13] == 1 ) { _buttonMap.push_back(DR);  }
    if ( _pressedButtons[14] == 1 ) { _buttonMap.push_back(DD);  }
    if ( _pressedButtons[15] == 1 ) { _buttonMap.push_back(DL);  }

    buildClipSelection();
}

void InteractionAdapter::buildClipSelection() {
    _clipSelectionMap.clear();

    if ( _buttonMap.size() > 0 )
    {
        if ( _buttonMap[0] == TL  || _buttonMap[0] == TR  )
        {
            _clipSelectionMap = _buttonMap;
        }
    }
}
