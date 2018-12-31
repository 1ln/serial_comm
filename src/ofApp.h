#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
	        int baud_rate;
     	   	char serial_byte;
	        ofSerial serial;
};
