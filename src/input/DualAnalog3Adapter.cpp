#include "DualAnalog3Adapter.h"

DualAnalogAdapter::DualAnalogAdapter()
{
    ofxGamepadHandler::get()->enableHotplug();

	//CHECK IF THERE EVEN IS A GAMEPAD CONNECTED
	if(ofxGamepadHandler::get()->getNumPads()>0){
			ofxGamepad* pad = ofxGamepadHandler::get()->getGamepad(0);
			ofAddListener(pad->onAxisChanged, this, &DualAnalogAdapter::axisChanged);
			ofAddListener(pad->onButtonPressed, this, &DualAnalogAdapter::buttonPressed);
			ofAddListener(pad->onButtonReleased, this, &DualAnalogAdapter::buttonReleased);
	}

    _keymap["TL"]  = 8;
    _keymap["TR"]  = 9;
    _keymap["SL1"] = 4;
    _keymap["SR1"] = 6;
    _keymap["SL2"] = 5;
    _keymap["SR2"] = 7;
    _keymap["AL"]  = 10;
    _keymap["AR"]  = 10;
    _keymap["B1"]  = 3;
    _keymap["B2"]  = 2;
    _keymap["B3"]  = 0;
    _keymap["B4"]  = 1;
    _keymap["DU"]  = 10;
    _keymap["DR"]  = 10;
    _keymap["DD"]  = 10;
    _keymap["DL"]  = 10;
}

DualAnalogAdapter::~DualAnalogAdapter()
{
    //dtor
}

void DualAnalogAdapter::axisChanged(ofxGamepadAxisEvent& e)
{
	cout << "AXIS " << e.axis << " VALUE " << ofToString(e.value) << endl;
}

void DualAnalogAdapter::buttonPressed(ofxGamepadButtonEvent& e)
{
	//cout << "BUTTON " << e.button << " PRESSED" << endl;
	InteractionAdapter::keyPressed( e.button );
}

void DualAnalogAdapter::buttonReleased(ofxGamepadButtonEvent& e)
{
	//cout << "BUTTON " << e.button << " RELEASED" << endl;
	InteractionAdapter::keyReleased( e.button );
}
