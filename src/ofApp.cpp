#include "ofApp.h"

void ofApp::setup(){

serial.listDevices();
vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

baud_rate = 115200;

//open first serial device on linux ttyACM0 
//(Teletypewriter Abstract Control Module 0)

serial.setup("/dev/ttyACM0",baud_rate);

}

void ofApp::update() {

serial_byte = serial.readByte();

//pointing to the start address of the character array,
//passing the data into the writeBytes function.
//serial.writeBytes(&no_data[0],5);

//Printing out received bytes
printf("%c\n",serial_byte);

}


void ofApp::draw(){

}
