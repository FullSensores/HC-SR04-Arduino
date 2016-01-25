/**
Autor: FullSensores.com
*/

#include <NewPing.h>

//Definimos los Pines de Conexion 
//Pin Trigger a Digital 12
#define TRIGGER_PIN  12
//Pin Echo a Digital 11
#define ECHO_PIN     11
//Constante de Distancia Maxima en este caso 2 Metros
#define MAX_DISTANCE 200

//Creamos un Objeto de la Libreria NewPing
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}
void loop() {
  
  delay(1000);
  // Obtenemos la medicion del tiempo de Rebote del sonido
  int uS = sonar.ping_median();
  //Imprimos el String Distancia 
  Serial.print("Distancia: ");
  // Calcular la distancia con base en una constante
  Serial.print(uS / US_ROUNDTRIP_CM);
  Serial.println("cm");
}
