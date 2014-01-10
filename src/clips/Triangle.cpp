#include "Triangle.h"

Triangle::Triangle()
{
    //ctor
}

Triangle::~Triangle()
{
    //dtor
}

//--------------------------------------------------------------
void Triangle::setup(){
    Clip::setup();
}

//--------------------------------------------------------------
void Triangle::update(){
    Clip::update();
}

//--------------------------------------------------------------
void Triangle::draw(){
    Clip::draw();

    ofSetColor(0, 255, 255);
    ofTriangle(
               ofPoint( halfScreenWidth, halfScreenHeight - screenHeight * 0.25 ),
               ofPoint( halfScreenWidth - screenWidth * 0.25, halfScreenHeight + screenHeight * 0.25 ),
               ofPoint( halfScreenWidth + screenWidth * 0.25, halfScreenHeight + screenHeight * 0.25 )
               );
}

//--------------------------------------------------------------
void Triangle::keyPressed(int key){
    Clip::keyPressed(key);
}

//--------------------------------------------------------------
void Triangle::keyReleased(int key){
    Clip::keyReleased(key);
}

//--------------------------------------------------------------
void Triangle::mouseMoved(int x, int y){
    Clip::mouseMoved(x, y);
}

//--------------------------------------------------------------
void Triangle::mouseDragged(int x, int y, int button){
    Clip::mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void Triangle::mousePressed(int x, int y, int button){
    Clip::mousePressed(x, y, button);
}

//--------------------------------------------------------------
void Triangle::mouseReleased(int x, int y, int button){
    Clip::mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void Triangle::windowResized(int w, int h){
    Clip::windowResized(w, h);

}

//--------------------------------------------------------------
void Triangle::gotMessage(ofMessage msg){
    Clip::gotMessage(msg);
}

//--------------------------------------------------------------
void Triangle::dragEvent(ofDragInfo dragInfo){
    Clip::dragEvent(dragInfo);
}
