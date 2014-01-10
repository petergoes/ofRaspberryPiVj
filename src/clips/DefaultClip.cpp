#include "DefaultClip.h"

DefaultClip::DefaultClip()
{
    //ctor
}

DefaultClip::~DefaultClip()
{
    //dtor
}

//--------------------------------------------------------------
void DefaultClip::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void DefaultClip::update(){
    Clip::update();
}

//--------------------------------------------------------------
void DefaultClip::draw(){
    Clip::draw();

    ofCircle( halfScreenWidth, halfScreenHeight, 60 );
}

//--------------------------------------------------------------
void DefaultClip::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void DefaultClip::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void DefaultClip::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void DefaultClip::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void DefaultClip::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void DefaultClip::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void DefaultClip::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void DefaultClip::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void DefaultClip::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
