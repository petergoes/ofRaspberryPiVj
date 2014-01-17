#ifndef _CLIP
#define _CLIP

#include "ofMain.h"

class Clip
{
	public:
	    float screenWidth;
	    float screenHeight;
	    float halfScreenWidth;
	    float halfScreenHeight;

        Clip() {};
        virtual ~Clip() {};

        virtual void setup(){
            screenWidth = ofGetWidth();
            screenHeight = ofGetHeight();
            halfScreenWidth = screenWidth * .5;
            halfScreenHeight = screenHeight *.5;

            speed = 0.5f;
            size = 0.5f;
            x = 0;
            y = 0;
            step = 0;
            };
        virtual void update(){ step++; };
        virtual void draw(){ ofPopStyle(); ofPopMatrix(); ofClear(0, 0, 0); ofPushStyle(); ofPushMatrix(); };
        virtual void keyPressed(int key){};
        virtual void keyReleased(int key){};
        virtual void mouseMoved(int x, int y ){};
        virtual void mouseDragged(int x, int y, int button){};
        virtual void mousePressed(int x, int y, int button){};
        virtual void mouseReleased(int x, int y, int button){};
        virtual void windowResized(int w, int h){ screenWidth = w; screenHeight = h; halfScreenWidth = w * .5; halfScreenHeight = h *.5; };
        virtual void gotMessage(ofMessage msg){};
        virtual void dragEvent(ofDragInfo dragInfo){};

    protected:
        float speed;
        float size;
        float x;
        float y;
        unsigned int step;
};

#endif
