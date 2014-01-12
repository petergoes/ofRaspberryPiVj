#pragma once

#define DEBUG false

#include "ofMain.h"

#include "core/ClipManager.h"

#include "input/InteractionAdapter.h"

#include "clips/Clip.h"
#include "clips/DefaultClip.h"
#include "clips/YellowCircle.h"
#include "clips/Squares.h"
#include "clips/Triangle.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        InteractionAdapter ia;
        ClipManager clipManager;

        int bnk_nr; // Current Bank Number
        int blk_nr; // Current Block Number
        int clp_nr; // Current Clip Number

        vector< vector< vector<Clip*> > > clips;

        const vector<int> *clipSelectionButtonMap;
};
