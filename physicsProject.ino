#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(11, 10); // RX, TX
DFRobotDFPlayerMini player;

int pin[] = {A0, A1, A2};

void setup() {
  Serial.begin(9600);
  mySoftwareSerial.begin(9600);
  player.begin(mySoftwareSerial); 
  player.volume(30);
}

void loop() {
  int value1 = analogRead(pin[0]);
  int value2 = analogRead(pin[1]);
  int value3 = analogRead(pin[2]);

  Serial.print("Pierwszy: ");
  Serial.println(value1);

  Serial.print("Drugi: ");
  Serial.println(value2);

  Serial.print("Trzeci: ");
  Serial.println(value3);

  Serial.println();

  if(value1 >= 900){
    player.play(1);
    delay(1000);
  }
  else if(value2 >= 900){
    player.play(2);
    delay(1000);
  }
  else if(value3 >= 900){
    player.play(3);
    delay(1000);
  }
  delay(500);

}
