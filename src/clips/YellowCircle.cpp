#include "YellowCircle.h"

YellowCircle::YellowCircle()
{
    //ctor
}

YellowCircle::~YellowCircle()
{
    //dtor
}

//--------------------------------------------------------------
void YellowCircle::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void YellowCircle::update(){
    Clip::update();
}

//--------------------------------------------------------------
void YellowCircle::draw(){
    Clip::draw();

    ofSetColor(255, 255, 0);
    ofCircle( halfScreenWidth, halfScreenHeight, 60 );
}

//--------------------------------------------------------------
void YellowCircle::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void YellowCircle::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void YellowCircle::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void YellowCircle::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void YellowCircle::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void YellowCircle::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void YellowCircle::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void YellowCircle::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void YellowCircle::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
