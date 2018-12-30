#include "ofApp.h"

void ofApp::setup(){

send = false;

serial.listDevices();
vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

int baud_rate = 115200;

}

void ofApp::update(){

}

void ofApp::draw(){

}
