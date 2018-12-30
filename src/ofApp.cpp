#include "ofApp.h"

void ofApp::setup(){

ofSerial serial;

serial.listDevices();
vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

int baud_rate = 115200;
int serial_byte = 0;
unsigned char no_data[5] = {'r','e','c','n','a'};

//open first serial device on linux ttyACM0 
//(Teletypewriter Abstract Control Module 0)

serial.setup("/dev/ttyACM0",baud_rate);

}

void ofApp::update() {

serial_byte = serial.readByte();

if(serial == OF_SERIAL_NO_DATA) {
    
    printf("no data received");

    //pointing to the start address of the character array,
    //passing that data into the writeBytes function.
    serial.writeBytes(&no_data[0],5);

} else if (serial == OF_SERIAL_ERROR) {

    printf("error");

} else {

    //Printing out received bytes
    printf("serial: %d",serial_byte);

}

}

void ofApp::draw(){

}
