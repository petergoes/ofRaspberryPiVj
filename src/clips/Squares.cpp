#include "Squares.h"

float size1;
float size2;
float size3;
float size4;
float offset;

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

    offset = halfScreenWidth * .25;

    speed = 0.1;
    angle = 0;
    offset = 1.5;
}

//--------------------------------------------------------------
void Squares::update(){
    Clip::update();

    size1 = sin(angle + 11.25) + offset;
    size2 = sin(angle + 22.50) + offset;
    size3 = sin(angle + 33.75) + offset;
    size4 = sin(angle + 45) + offset;

    angle += speed;
}

//--------------------------------------------------------------
void Squares::draw(){
    Clip::draw();

    ofSetColor(0, 0, 255, 127);
    ofTranslate( (halfScreenWidth * .5) - (offset * .5), (halfScreenHeight * .5) - (offset * .5) );
    ofRect(0 - (size1 * 100) * .5,               0 - (size1 * 100) * .5,                  size1 * 100, size1 * 100);
    ofRect(halfScreenWidth - (size2 * 100) * .5, 0 - (size2 * 100) * .5,                  size2 * 100, size2 * 100);
    ofRect(0 - (size4 * 100) * .5,               halfScreenHeight - (size4 * 100) * .5,   size4 * 100, size4 * 100);
    ofRect(halfScreenWidth - (size3 * 100) * .5, halfScreenHeight - (size3 * 100) * .5,   size3 * 100, size3 * 100);

    ofSetLineWidth(10);
    ofNoFill();
    ofRect(0 - (size1 * 100) * .5,               0 - (size1 * 100) * .5,                  size1 * 100, size1 * 100);
    ofRect(halfScreenWidth - (size2 * 100) * .5, 0 - (size2 * 100) * .5,                  size2 * 100, size2 * 100);
    ofRect(0 - (size4 * 100) * .5,               halfScreenHeight - (size4 * 100) * .5,   size4 * 100, size4 * 100);
    ofRect(halfScreenWidth - (size3 * 100) * .5, halfScreenHeight - (size3 * 100) * .5,   size3 * 100, size3 * 100);
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
