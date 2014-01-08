#include "testApp.h"

int windowWidth;
int windowHeight;

//--------------------------------------------------------------
void testApp::setup(){
	windowWidth = ofGetWidth();
	windowHeight = ofGetHeight();
}

//--------------------------------------------------------------
void testApp::update(){
	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::draw(){
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	windowWidth = ofGetWidth();
	windowHeight = ofGetHeight();
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
}
