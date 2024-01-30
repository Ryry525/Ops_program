#define IR 19
#define LED 5

long zero;
void setup() {
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  zero = 0;
  for(int i= 0; i< 100; i++){
    zero += analogRead(IR);
  }
  zero /= 100;
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(IR);
  val = val - zero;
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0 ,255);
  Serial.println(val);
  analogWrite(LED, val);
}
