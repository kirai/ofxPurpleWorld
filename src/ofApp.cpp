#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleWidth = 100;
    circleX = 600;
    circlexb = 200;

    circleY = 600;
    wasChanged = 0;
    circleSpeedY =10;
    circleSpeedX =10;

    ofSetCircleResolution(128);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(wasChanged==1){
        circleWidth++;
        circlexb++;
    }else{
        circleWidth--;
        circlexb--;
    }
    
    circleY += circleSpeedY;
    if(circleY>ofGetHeight() | circleY < 0 ){
        circleSpeedY *= -1;
    }
    
    circleX += circleSpeedX;
    if(circleX>ofGetWidth() | circleX < 0 ){
        circleSpeedX *= -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    ofRect(10,10,ofGetWidth(),ofGetHeight());

    ofSetColor(255, 40, 45);
    
    ofCircle(circlexb, circleY, circleWidth);

    ofSetColor(100, 40, 45);

    ofCircle(circleX+100, circleY-50, circleWidth-50);

    ofSetColor(100, 40, 145);

    ofCircle(circleX-100, circleY-100, circleWidth+50);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    if(wasChanged == 0){
        wasChanged = 1;
    }else {
        wasChanged = 0;
    }
    
//    if(circleWidth>300)
//        wasChanged=2;
//    int i = 0;
//    for(i;i<50;i++){
  //      circleWidth++;
        
    //}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
