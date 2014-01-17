#include "Triangle.h"

float angle;
float rotation;

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

    x = halfScreenWidth;
    y = halfScreenHeight;
    rotation = 0;
    angle = 0;
    speed = 0.01;
}

//--------------------------------------------------------------
void Triangle::update(){
    Clip::update();

    rotation = sin(angle) * 360;

    angle += speed;
}

//--------------------------------------------------------------
void Triangle::draw(){
    Clip::draw();

    ofTranslate( x, y );
    ofRotate( rotation );

    ofSetColor(0, 255, 255, 127);
    ofTriangle(
               ofPoint( 0, (screenHeight * 0.25) * -1 ),
               ofPoint( screenWidth * 0.25, screenHeight * 0.25 ),
               ofPoint( (screenWidth * 0.25) * -1, screenHeight * 0.25 )
               );

    ofSetLineWidth(10);
    ofNoFill();
    ofTriangle(
               ofPoint( 0, (screenHeight * 0.25) * -1 ),
               ofPoint( screenWidth * 0.25, screenHeight * 0.25 ),
               ofPoint( (screenWidth * 0.25) * -1, screenHeight * 0.25 )
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
