#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){

	bnk_nr = 0;
    blk_nr = 0;
    clp_nr = 0;

    clipSelectionButtonMap = &ia.clipSelectionMap;

    clips.push_back( vector< vector<Clip*> >() );   // Bank  0
        clips[0].push_back( vector<Clip*>() );          // Block 0
            clips[0][0].push_back( new DefaultClip() );    // Clip  0
            clips[0][0].push_back( new YellowCircle() );   // Clip  1
            clips[0][0].push_back( new Triangle() );       // Clip  2
            clips[0][0].push_back( new Squares() );        // Clip  3

        clips[0].push_back( vector<Clip*>() );          // Block 1
            clips[0][1].push_back( new RedCircles() );     // Clip  0
            clips[0][1].push_back( new GreenSquares() );   // Clip  1


    clipManager.setup( clips, &bnk_nr, &blk_nr, &clp_nr );
}

//--------------------------------------------------------------
void testApp::update(){

    clipManager.changeClip( clipSelectionButtonMap );
    ia.cleanSelectionMap();
    ia.cleanKeymap();

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
