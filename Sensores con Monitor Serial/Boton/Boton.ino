/*
 * Programa creado por: Mónica P. Arroyo
 * Redes sociales: @monicaparroyo
 */
 
void setup() {
  Serial.begin(9600); // Se inicializa el Monitor Serial
  pinMode(2, INPUT); // Se configura el pin 2 como ENTRADA
}

void loop() {
  int lectura = digitalRead(2); // Se lee el dato digital en el pin 2
  Serial.println(lectura); // Imprime la variable lectura en el Monitor Serie
  delay(500); // Esperamos medio segundo para repetir el loop
}
