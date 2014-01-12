#include "RedCircles.h"

RedCircles::RedCircles()
{
    //ctor
}

RedCircles::~RedCircles()
{
    //dtor
}

//--------------------------------------------------------------
void RedCircles::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void RedCircles::update(){
    Clip::update();
}

//--------------------------------------------------------------
void RedCircles::draw(){
    Clip::draw();

    float rectSize = halfScreenWidth * .25;

    ofSetColor(255, 0, 0);
    ofTranslate( (halfScreenWidth * .5), (halfScreenHeight * .5) );
    ofCircle(0,               0,                  rectSize);
    ofCircle(halfScreenWidth, 0,                  rectSize);
    ofCircle(0,               halfScreenHeight,   rectSize);
    ofCircle(halfScreenWidth, halfScreenHeight,   rectSize);
}

//--------------------------------------------------------------
void RedCircles::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void RedCircles::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void RedCircles::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void RedCircles::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void RedCircles::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void RedCircles::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void RedCircles::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void RedCircles::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void RedCircles::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
