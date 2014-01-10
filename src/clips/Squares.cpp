#include "Squares.h"

Squares::Squares()
{
    //ctor
}

Squares::~Squares()
{
    //dtor
}

//--------------------------------------------------------------
void Squares::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void Squares::update(){
    Clip::update();
}

//--------------------------------------------------------------
void Squares::draw(){
    Clip::draw();

    float rectSize = halfScreenWidth * .25;

    ofSetColor(0, 0, 255);
    ofTranslate( (halfScreenWidth * .5) - (rectSize * .5), (halfScreenHeight * .5) - (rectSize * .5) );
    ofRect(0,               0,                  rectSize, rectSize);
    ofRect(halfScreenWidth, 0,                  rectSize, rectSize);
    ofRect(0,               halfScreenHeight,   rectSize, rectSize);
    ofRect(halfScreenWidth, halfScreenHeight,   rectSize, rectSize);
}

//--------------------------------------------------------------
void Squares::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void Squares::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void Squares::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void Squares::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void Squares::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void Squares::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void Squares::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void Squares::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void Squares::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
