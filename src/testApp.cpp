#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){

	bnk_nr = 0;
    blk_nr = 0;
    clp_nr = 0;

    // Bank 0

        // Block 0
            clips[0][0][0] = new DefaultClip();
            clips[0][0][1] = new YellowCircle();
            clips[0][0][2] = new Squares();
            clips[0][0][3] = new Triangle();

    clips[bnk_nr][blk_nr][clp_nr]->setup();

    clipManager.setup( clips[TOTAL_BANKS][TOTAL_BLCKS][TOTAL_CLIPS], &bnk_nr, &blk_nr, &clp_nr );
}

//--------------------------------------------------------------
void testApp::update(){
    clips[bnk_nr][blk_nr][clp_nr]->update();

}

//--------------------------------------------------------------
void testApp::draw(){
    clips[bnk_nr][blk_nr][clp_nr]->draw();

    if ( DEBUG == true )
    {
        ofPopStyle();
        ofPopMatrix();
        ofPushStyle();
        ofPushMatrix();

        ofLine( (ofGetWidth() * 0.25), 0, (ofGetWidth() * 0.25), ofGetHeight() );
        ofLine( (ofGetWidth() * 0.75), 0, (ofGetWidth() * 0.75), ofGetHeight() );
        ofLine( 0, (ofGetHeight() * 0.25), ofGetWidth(), (ofGetHeight() * 0.25) );
        ofLine( 0, (ofGetHeight() * 0.75), ofGetWidth(), (ofGetHeight() * 0.75) );

        ofSetColor(255, 0, 0);
        ofLine( (ofGetWidth() * 0.50), 0, (ofGetWidth() * 0.50), ofGetHeight() );
        ofLine( (ofGetWidth() * 0.50), 0, (ofGetWidth() * 0.50), ofGetHeight() );
        ofLine( 0, (ofGetHeight() * 0.50), ofGetWidth(), (ofGetHeight() * 0.50) );
        ofLine( 0, (ofGetHeight() * 0.50), ofGetWidth(), (ofGetHeight() * 0.50) );
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    ia.keyPressed(key);
    clips[bnk_nr][blk_nr][clp_nr]->keyPressed( key );
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    ia.keyReleased(key);
    //cout << "key: " << key << endl;

/*
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
    */
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    clips[bnk_nr][blk_nr][clp_nr]->mouseMoved( x, y );
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    clips[bnk_nr][blk_nr][clp_nr]->mouseDragged( x, y, button );
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    clips[bnk_nr][blk_nr][clp_nr]->mousePressed( x, y, button );
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    clips[bnk_nr][blk_nr][clp_nr]->mouseReleased( x, y, button );
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    clips[bnk_nr][blk_nr][clp_nr]->windowResized( w, h );
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    clips[bnk_nr][blk_nr][clp_nr]->gotMessage( msg );
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    clips[bnk_nr][blk_nr][clp_nr]->dragEvent( dragInfo );
}
