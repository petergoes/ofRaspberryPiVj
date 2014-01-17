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

    x = halfScreenWidth;
    y = halfScreenHeight;

    angle = 0;
    speed = 0.05;
}

//--------------------------------------------------------------
void YellowCircle::update(){
    Clip::update();

    angle += speed;
}

//--------------------------------------------------------------
void YellowCircle::draw(){
    Clip::draw();

    ofTranslate(x, y);

    ofSetColor(255, 255, 0, 127);
    ofCircle( (sin(angle) * (halfScreenHeight * .4)),
              (cos(angle) * (halfScreenHeight * .4)),
              size * 100 );
    ofCircle( (sin(angle) * ((halfScreenHeight * .4) * 1.75)),
              (cos(angle) * ((halfScreenHeight * .4) * 1.75)),
              size * 100 );

    ofCircle( (cos(angle) * (halfScreenHeight * .4)),
              (sin(angle) * (halfScreenHeight * .4)),
              size * 100 );
    ofCircle( (cos(angle) * ((halfScreenHeight * .4) * 1.75)),
              (sin(angle) * ((halfScreenHeight * .4) * 1.75)),
              size * 100 );

    ofSetLineWidth(10);
    ofNoFill();
    ofCircle( (sin(angle) * (halfScreenHeight * .4)),
              (cos(angle) * (halfScreenHeight * .4)),
              size * 100 );
    ofCircle( (sin(angle) * ((halfScreenHeight * .4) * 1.75)),
              (cos(angle) * ((halfScreenHeight * .4) * 1.75)),
              size * 100 );

    ofCircle( (cos(angle) * (halfScreenHeight * .4)),
              (sin(angle) * (halfScreenHeight * .4)),
              size * 100 );
    ofCircle( (cos(angle) * ((halfScreenHeight * .4) * 1.75)),
              (sin(angle) * ((halfScreenHeight * .4) * 1.75)),
              size * 100 );
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
