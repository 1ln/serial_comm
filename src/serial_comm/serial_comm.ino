uint8_t input_pin = 2;
char rec = 0;

void setup() {

Serial.begin(115200);
pinMode(input_pin,INPUT_PULLUP);

}

void loop() {

int val = digitalRead(input_pin);

if(val == LOW) {

    Serial.println("test");

    } else {
    
    if(Serial.available() > 0) {
        
        rec = Serial.read();

        Serial.print("received:");
        Serial.print(rec);

        }
    }
}
