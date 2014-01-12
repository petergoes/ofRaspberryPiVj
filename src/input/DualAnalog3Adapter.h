#ifndef DUALANALOG3ADAPTER_H
#define DUALANALOG3ADAPTER_H

#include "InteractionAdapter.h"
#include "ofxGamepadHandler.h"

class DualAnalogAdapter : public InteractionAdapter
{
    public:
        DualAnalogAdapter();
        virtual ~DualAnalogAdapter();

        void axisChanged(ofxGamepadAxisEvent &e);
		void buttonPressed(ofxGamepadButtonEvent &e);
		void buttonReleased(ofxGamepadButtonEvent &e);
};

#endif // DUALANALOG3ADAPTER_H
