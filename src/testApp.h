#pragma once

#include "ofMain.h"
#include "clips/clip.h"
#include "clips/defaultClip.h"

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

		int windowWidth;
		int windowHeight;

        int bank_nr = 0;
        int block_nr = 1;
        int clip_nr = 3;

        // Stored Clips: clips[banks][blocks][clips]
        int clips[2][4][4] = {

            // bank 0
            {
                {   /* block 0 */
                    900, 901, 902, 904 // clips 0-3
                },
                {   /* block 1 */
                    910, 911, 912, 913 // clips 0-3
                },
                {   /* block 2 */
                    920, 921, 922, 923 // clips 0-3
                },
                {   /* block 3 */
                    930, 931, 932, 933 // clips 0-3
                }
            },

            // bank 1
            {
                {   /* block 0 */
                    800, 801, 802, 804 // clips 0-3
                },
                {   /* block 1 */
                    810, 811, 812, 813 // clips 0-3
                },
                {   /* block 2 */
                    820, 821, 822, 823 // clips 0-3
                },
                {   /* block 3 */
                    830, 831, 832, 833 // clips 0-3
                }
            }
        };
};
