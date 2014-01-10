#pragma once

#include "ofMain.h"
#include "clips/clip.h"
#include "clips/DefaultClip.h"
#include "clips/YellowCircle.h"

#define TOTAL_BANKS 1
#define TOTAL_BLCKS 4
#define TOTAL_CLIPS 2

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

        int bnk_nr; // Current Bank Number
        int bck_nr; // Current Block Number
        int clp_nr; // Current Clip Number

        Clip* clips[TOTAL_BANKS][TOTAL_BLCKS][TOTAL_CLIPS];
};
