const int LED = D7;

void setup() {
	pinMode(LED, OUTPUT);
}

void longBlink() {
    digitalWrite(LED, HIGH);
	delay(1000);
	digitalWrite(LED, LOW);
	delay(500);
}

void shortBlink() {
    digitalWrite(LED, HIGH);
	delay(300);
	digitalWrite(LED, LOW);
	delay(500);
}

void loop() {
    // 0 for dots and 1 for dashes
    int sequence[13] = {0,0,0,0,1,1,1,0,0,1,0,1,0};
    
    for(int i = 0; i < 13; i++) {
        if(sequence[i] == 0) shortBlink();
        else longBlink();
    }
}