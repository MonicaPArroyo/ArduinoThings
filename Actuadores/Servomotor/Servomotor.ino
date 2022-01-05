/*
 * Programa creado por: Mónica P. Arroyo
 * Redes sociales: @monicaparroyo
 */

#include <Servo.h> // Incluimos la librería para poder controlar el servo
 
Servo servoMotor; // Declaramos la variable para controlar el servo

void setup() {
  servoMotor.attach(9); // Iniciamos el servo para que empiece a trabajar con el pin 9
}
 
void loop() {
  int grados = 0; // Declaramos la variable para los grados
  int tiempo = 100; // Declaramos la variable para el tiempo
  
  servoMotor.write(0);// Desplazamos a la posición que contiene la variable grados
  delay(1000);// Esperamos el tiempo que contiene la variable tiempo
}
