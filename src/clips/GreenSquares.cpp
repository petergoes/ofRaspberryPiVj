#include "GreenSquares.h"

GreenSquares::GreenSquares()
{
    //ctor
}

GreenSquares::~GreenSquares()
{
    //dtor
}

//--------------------------------------------------------------
void GreenSquares::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void GreenSquares::update(){
    Clip::update();
}

//--------------------------------------------------------------
void GreenSquares::draw(){
    Clip::draw();

    float rectSize = halfScreenWidth * .25;

    ofSetColor(0, 255, 0);
    ofTranslate( (halfScreenWidth * .5) - (rectSize * .5), (halfScreenHeight * .5) - (rectSize * .5) );
    ofRect(0,               0,                  rectSize, rectSize);
    ofRect(halfScreenWidth, 0,                  rectSize, rectSize);
    ofRect(0,               halfScreenHeight,   rectSize, rectSize);
    ofRect(halfScreenWidth, halfScreenHeight,   rectSize, rectSize);
}

//--------------------------------------------------------------
void GreenSquares::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void GreenSquares::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void GreenSquares::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void GreenSquares::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void GreenSquares::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void GreenSquares::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void GreenSquares::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void GreenSquares::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void GreenSquares::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
