#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Clip.h>


class Triangle : public Clip
{
    public:
        Triangle();
        virtual ~Triangle();

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
        void gotMessage(ofMessage msg);
        void dragEvent(ofDragInfo dragInfo);
};

#endif // TRIANGLE_H
