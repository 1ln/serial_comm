uint8_t input_pin = 2;

void setup() {

Serial.begin(115200);
pinMode(input_pin,INPUT_PULLUP);

}

void loop() {

int val = digitalRead(input_pin);

if(val == LOW) {

    Serial.println('a');

}
}
