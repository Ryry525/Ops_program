#define GAS_BUTTON 3
#define BREAK_BUTTON 2
#define LED A5


int score;
char answer;
void setup() {
  Serial.begin(9600);
  pinMode(GAS_BUTTON, INPUT);
  pinMode(BREAK_BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {  
    if(Serial.available() != 0){
      answer = Serial.read();
      int gas = digitalRead(GAS_BUTTON);
      int stop = digitalRead(BREAK_BUTTON);
      if (answer == '1' && gas == 1){
        digitalWrite(LED, HIGH);
        delay(5000);
        digitalWrite(LED,LOW);
        score += 1;
        Serial.println(score);
        Serial.write("f");
      }
      if (answer == '2' && stop == 1){
        digitalWrite(LED, HIGH);
        delay(5000);
        digitalWrite(LED,LOW);
        score += 1;
        Serial.println(score);
        Serial.write("f");
      }
      else
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
      delay(1000);
      Serial.write("f");
    }
  }


