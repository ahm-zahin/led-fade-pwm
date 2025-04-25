const int ledPin = 11;

int brightness = 0; //Brightness selection
int fadeAmount = 15; //Level selection to fade up the LED



void setup () {
	pinMode(ledPin, OUTPUT);
	Serial.begin(9600);
}


void loop () {
//Controlling the brightness of the led based on brightness variable
	analogWrite(ledPin, brightness);
	brightness = brightness + fadeAmount;
	if (brightness <=0 || brightness >= 255) {
		fadeAmount = -fadeAmount;
	}
Serial.println(brightness);  
delay(500);
}