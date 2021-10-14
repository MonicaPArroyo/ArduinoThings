/*
 * Programa creado por: Mónica P. Arroyo
 * Social media: @monicaparroyo
 */

//Variables
float temp; //Variable para almacenar la temperatura
 
void setup() {
  Serial.begin(9600); //Se inicializa el Monitor Serial
}
 
void loop() {
  temp = analogRead(A0); //Se lee el dato digital en el pin A0

  temp = (5.0 * tempC * 100.0)/1024.0; //Se calcula la temperatura con la fórmula
 
  Serial.println(temp); //Imprime el dato en el Monitor Serie
 
  delay(1000); //Esperamos 1 segundo para repetir el loop
}
