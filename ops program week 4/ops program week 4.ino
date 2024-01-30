#define LED_PIN 7 
#define POTENT A4
void setup() {
pinMode(LED_PIN, OUTPUT);
pinMode(POTENT, INPUT);
Serial.begin(9600);
}

void loop() {
  //get value from potent
int voltage = analogRead(POTENT);
//console print 
Serial.println(voltage);
////turn led on 
digitalWrite(LED_PIN, HIGH);
//amount of time led is turned on 
delay(voltage); 
//turn off led
digitalWrite(LED_PIN, LOW);
//amount of time led is turned off 
delay(voltage);
}
