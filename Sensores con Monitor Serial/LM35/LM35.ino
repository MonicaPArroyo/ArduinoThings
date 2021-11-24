/*
 * Programa creado por: Mónica P. Arroyo
 * Social media: @monicaparroyo
 */
 
void setup() {
  Serial.begin(9600); //Se inicializa el Monitor Serial
}
 
void loop() {
  float temperatura; //Variable para almacenar la temperatura
  temperatura = medirTemperatura(); //Se invoca a la función que mide la temperatura;
 
  Serial.println(temperatura); //Imprime el dato en el Monitor Serie
 
  delay(500); //Esperamos medio segundo para repetir el loop
}

float medirTemperatura(){
  int lectura = analogRead(A0); //Se lee el dato digital en el pin A0
  float temp = (5.0 * lectura * 100.0)/1024.0; //Se calcula la temperatura con la fórmula
  return temp;
}
