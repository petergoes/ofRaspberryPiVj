#ifndef SQUARES_H
#define SQUARES_H

#include <Clip.h>


class Squares : public Clip
{
    public:
        Squares();
        virtual ~Squares();

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

    private:
        float angle;
        float offset;
};

#endif // SQUARES_H
