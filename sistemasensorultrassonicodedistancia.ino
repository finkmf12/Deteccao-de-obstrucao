#include <UltrasonicSensor.h>//by Erick Simões versão 3.0.0
#include <Servo.h>
Servo meuServo;

UltrasonicSensor ultrasonic(5, 6); //porta onde está conectado o trigger e o echo, respectivamente
int distancia;

void setup() {
  Serial.begin(9600);
  meuServo.attach(8);
}

void loop() {
 distancia = ultrasonic.distanceInCentimeters();
 
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  delay(800);

  if(distancia>10){
    meuServo.write(0);
    } else {
    meuServo.write(130);
  }
}