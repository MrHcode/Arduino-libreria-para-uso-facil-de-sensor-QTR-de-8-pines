//Esta libreria es de uso libre, por lo que puedes hacer lo que quieras con ella, esta misma requiere de la libreria QTRSensors para funcionar.

#include <QTRSensors.h>
#include <QTRsimple.h>

void setup()
{
  Serial.begin(9600);
  
  // se inicia el sensor con la funcion sensorlinea, sus parametros son los 8 pines analogos que se van a usar, y el ultimo parametro es el emiter pin.
  // se puede añadir un parametro extra que modifica el tiempo de calibracion, donde 400 es la cantidad por defecto.
  sensorlinea(A1,A2,A3,A4,A5,A6,A7,A8,2);

  //existe una funcion llamada calibrar(); para ejecutar exclusivamente la calibracón del sensor, tambien se le puede añadir un parametro para modificar el tiempo de calibracion.
}

void loop()
{
  //leer linea regresa la posición de la linea en un rango de 0 a 7000
  leerlinea();
  //para leer individualmente cada sensor puedes utilizar la función leersensor(n); donde 'n' representa cual sensor vas a leer.
  Serial.println(leersensor(1));
  
}
