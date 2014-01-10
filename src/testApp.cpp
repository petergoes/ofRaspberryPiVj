#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){

	bnk_nr = 0;
    bck_nr = 0;
    clp_nr = 0;

    clips[0][0][0] = new DefaultClip();
    clips[0][0][1] = new YellowCircle();

    clips[bnk_nr][bck_nr][clp_nr]->setup();
}

//--------------------------------------------------------------
void testApp::update(){
    clips[bnk_nr][bck_nr][clp_nr]->update();
}

//--------------------------------------------------------------
void testApp::draw(){
    clips[bnk_nr][bck_nr][clp_nr]->draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    clips[bnk_nr][bck_nr][clp_nr]->keyPressed( key );
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

    if ( clp_nr < TOTAL_CLIPS - 1 )
    {
        clp_nr = clp_nr + 1;
    }
    else
    {
        clp_nr = 0;
    }

    clips[bnk_nr][bck_nr][clp_nr]->setup();
    clips[bnk_nr][bck_nr][clp_nr]->keyReleased( key );
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    clips[bnk_nr][bck_nr][clp_nr]->mouseMoved( x, y );
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    clips[bnk_nr][bck_nr][clp_nr]->mouseDragged( x, y, button );
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    clips[bnk_nr][bck_nr][clp_nr]->mousePressed( x, y, button );
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    clips[bnk_nr][bck_nr][clp_nr]->mouseReleased( x, y, button );
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    clips[bnk_nr][bck_nr][clp_nr]->windowResized( w, h );
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    clips[bnk_nr][bck_nr][clp_nr]->gotMessage( msg );
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    clips[bnk_nr][bck_nr][clp_nr]->dragEvent( dragInfo );
}
