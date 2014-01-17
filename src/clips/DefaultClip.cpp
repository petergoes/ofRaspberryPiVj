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

    x = halfScreenWidth;
    y = halfScreenHeight;

    speed = 0.1;
    angle = 0;
    offset = 1.5;
}

//--------------------------------------------------------------
void DefaultClip::update(){
    Clip::update();

    size = sin(angle) + offset;
    angle += speed;
}

//--------------------------------------------------------------
void DefaultClip::draw(){
    Clip::draw();

    ofTranslate(x, y);
    ofSetColor(255, 255, 255, 127);
    ofCircle( 0, 0, size * 100 );

    ofSetLineWidth(10);
    ofNoFill();
    ofCircle( 0, 0, size * 100 );
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
