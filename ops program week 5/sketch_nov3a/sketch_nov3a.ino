#include "Pitches.h"
#define RED_LED 9
#define ORANGE_LED 10
#define POT A6
#define SPEAKER 3

int NOTE_DUR = 137;

void play(int note, int dur) {
  tone(SPEAKER, note);
  delay(dur * NOTE_DUR);
  noTone(SPEAKER);
  delay(dur * NOTE_DUR / 3);
}
//despacito
void song1() {
  NOTE_DUR = 58;  // Set tempo to be faster
  play(NOTE_D4, 1);
  play(NOTE_FS4, 1);
  play(NOTE_B4, 1);
  play(NOTE_D5, 1);
  play(NOTE_CS5, 1);
  play(NOTE_B4, 1);
  play(NOTE_AS4, 1);
  play(NOTE_B4, 16);  //m2
  delay(NOTE_DUR * 6);
  play(NOTE_B4, 6);
  play(NOTE_CS5, 6);
  play(NOTE_D5, 6);
  play(NOTE_E5, 6);  //m3
  play(NOTE_FS5, 7);
  play(NOTE_D5, 7);
  play(NOTE_FS5, 8);
  play(NOTE_D5, 8);
  play(NOTE_FS5, 22);
  delay(NOTE_DUR * 4);
  play(NOTE_FS4, 2);  //m4
  play(NOTE_D5, 6);
  play(NOTE_E4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_D4, 2);
  play(NOTE_B4, 4);  //m5
  play(NOTE_D4, 2);
  play(NOTE_FS4, 4);
  play(NOTE_B4, 2);
  play(NOTE_D4, 4);
  play(NOTE_B4, 4);
  play(NOTE_D4, 2);
  play(NOTE_FS4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_B4, 4);  //m6
  play(NOTE_D4, 2);
  play(NOTE_G4, 4);
  play(NOTE_B4, 2);
  play(NOTE_D4, 4);
  play(NOTE_B4, 4);
  play(NOTE_D4, 2);
  play(NOTE_G4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 4);  //m7
  play(NOTE_FS4, 2);
  play(NOTE_A4, 4);
  play(NOTE_D5, 2);
  play(NOTE_FS4, 4);
  play(NOTE_D5, 4);
  play(NOTE_FS4, 2);
  play(NOTE_A4, 2);
  play(NOTE_D5, 2);
  play(NOTE_CS5, 2);
  play(NOTE_B4, 2);
  play(NOTE_A4, 2);
  play(NOTE_E5, 12);  //m8
  delay(NOTE_DUR * 2);
  play(NOTE_FS4, 2);
  play(NOTE_D5, 6);
  play(NOTE_E4, 2);
  play(NOTE_CS5, 6);
  play(NOTE_D4, 2);
  play(NOTE_B4, 10);  //m9
}
void song2() {
  NOTE_DUR = 104;
  play(NOTE_E4, 1);  //Jin
  play(NOTE_E4, 1);  //gle
  play(NOTE_E4, 2);  //bell
  play(NOTE_E4, 1);  //jin
  play(NOTE_E4, 2);  //gle
  play(NOTE_E4, 1);  //bell
  play(NOTE_E4, 1);
  play(NOTE_G4, 1);
  play(NOTE_C4, 1);
  play(NOTE_D4, 1);
  play(NOTE_E4, 4);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 2);
  play(NOTE_E4, 1);
  play(NOTE_D4, 1);
  play(NOTE_D4, 1);
  play(NOTE_E4, 1); 
  play(NOTE_D4, 2);
  play(NOTE_G5, 2);
  play(NOTE_E4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 2);
  play(NOTE_E4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 2);
  play(NOTE_E4, 1);
  play(NOTE_G5, 1);
  play(NOTE_C4, 1);
  play(NOTE_D4, 1);
  play(NOTE_E4, 4);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_F4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 1);
  play(NOTE_E4, 2);
  play(NOTE_G5, 1);
  play(NOTE_G5, 1);
  play(NOTE_F4, 1);
  play(NOTE_D4, 1);
  play(NOTE_C4, 4);  
}
void song3(){
  NOTE_DUR = 144;
  play(NOTE_E4, 2);
  play(NOTE_E4, 2);
  play(NOTE_F4, 2);
  play(NOTE_G4, 2);
  play(NOTE_G4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 2);
  play(NOTE_C4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_E4, 3);
  play(NOTE_D4, 2);
  play(NOTE_D4, 4);
  play(NOTE_E4, 2);
  play(NOTE_E4, 2);
  play(NOTE_F4, 2);
  play(NOTE_G4, 2);
  play(NOTE_G4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 2);
  play(NOTE_C4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 3);
  play(NOTE_C4, 2);
  play(NOTE_C4, 3);
  play(NOTE_D4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_E4, 2);
  play(NOTE_F4, 2);
  play(NOTE_G4, 2);
  play(NOTE_G4, 2);
  play(NOTE_F4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 2);
  play(NOTE_C4, 2);
  play(NOTE_C4, 2);
  play(NOTE_D4, 2);
  play(NOTE_E4, 2);
  play(NOTE_D4, 3);
  play(NOTE_C4, 1);
  play(NOTE_C4, 3);
}

void setup() {
  Serial.begin(9600);
  pinMode(SPEAKER, OUTPUT);
  pinMode(POT, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(ORANGE_LED, OUTPUT);
}

void loop() {
  int voltage = analogRead(POT);
  Serial.println(voltage);
  if (voltage < 10) {
    song1();
  } else if (voltage > 1000) {
    song2();
    digitalWrite(RED_LED, HIGH);
  }
  else {
    song3();
    digitalWrite(ORANGE_LED, HIGH);
  }
}