#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySerial.setup("/dev/cu.usbmodem1411", 9600);
    }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
 ofDrawBitmapStringHighlight("Everything works!", 20, 20);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    printf("byte: %d \n", key);
    unsigned char myByte = key;
    bool byteWasWritten = mySerial.writeByte(myByte);
    mySerial.writeByte(myByte);
    mySerial.writeByte(myByte);
    if ( !byteWasWritten )
        printf("byte was not written to serial port");

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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
