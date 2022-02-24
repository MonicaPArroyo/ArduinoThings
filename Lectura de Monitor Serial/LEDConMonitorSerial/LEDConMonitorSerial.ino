/*
 * LED con Monitor Serial
 * 
 * Enciende un LED cuando recibe una letra A desde el Monitor en Serie.
 * Apaga un LED cuando recibe una letra B desde el Monitor en Serie
 * 
 * Creado el 24/02/2022
 * por Mónica P. Arroyo
 * Redes sociales: @monicaparroyo
 */

char lecturaSerial; //Variable para recibir datos del Monitor Serial

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); //Se configura el pin del LED como salida
}

void loop() {
  if(Serial.available()){ //¿Se tiene un dato en el Monitor Serial en espera de ser leido?
    lecturaSerial = Serial.read(); //Se lee el dato

    if(lecturaSerial == "A"){ //¿El valor es "A"?
      digitalWrite(2, HIGH); //Enciende el LED
    }
    else if(lecturaSerial == "B"){ //¿El valor es "B"?
      digitalWrite(2,LOW); //Apaga el LED
    }
  }
  delay(100);
}
