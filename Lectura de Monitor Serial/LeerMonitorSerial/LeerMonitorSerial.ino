/*
 * Leer Monitor Serial
 * 
 * Lee un dato que se recibe a través del Monitor en Serie 
 * y lo imprime.
 * 
 * Creado el 24/02/2022
 * por Mónica P. Arroyo
 * Redes sociales: @monicaparroyo
 */

char lecturaSerial; //Variable para recibir datos del Monitor Serial

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){ //¿Se tiene un dato en el Monitor Serial en espera de ser leido?
    lecturaSerial = Serial.read(); //Se lee el dato

    //A partir de aquí se puede hacer todo lo que se necesite con el dato que se recibió
    
    Serial.print("Dato recibido: ");
    Serial.println(lecturaSerial);//Se imprime el dato recibido
  }
  delay(100);
}
