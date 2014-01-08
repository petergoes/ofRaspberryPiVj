#ifndef _CLIP
#define _CLIP

#include "ofMain.h"

class clip
{
	public:

		virtual void setup() = 0;
		void update() {}
		void draw() {};

		void keyPressed(int key) {};
		void keyReleased(int key) {};
		void mouseMoved(int x, int y ) {};
		void mouseDragged(int x, int y, int button) {};
		void mousePressed(int x, int y, int button) {};
		void mouseReleased(int x, int y, int button) {};
		void windowResized(int w, int h) {};
		void dragEvent(ofDragInfo dragInfo) {};
		void gotMessage(ofMessage msg) {};

	private:
};

#endif
