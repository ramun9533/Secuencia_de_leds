int Columnas[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
 
int Filas[] = {2, 3, 4};
//int RandFila;     //Variable para fila aleatoria
//int RandColumna;  //Variable para columna aleatoria
 
void setup()
{
  int contador;

  for (int contador = 5; contador < 17; contador++){
    pinMode(Columnas[contador], OUTPUT); }
 
  for (int contador = 2; contador < 4; contador++){
    pinMode(Filas[contador], OUTPUT); }
    

}
 
void loop(){

for (int contador = 2; contador < 17; contador++){
  digitalWrite (Filas [contador], LOW); 
  digitalWrite (Columnas [contador], LOW);
  
}
digitalWrite (17, HIGH);
digitalWrite (2, HIGH);
//for (int contador1 = 2; contador1 < 4;contador1++){
 // digitalWrite (Filas, HIGH);
//for (int contador2 = 5; contador2 < 17; contador2++){
  // digitalWrite (Columnas, HIGH);
   //delay (300);
 // digitalWrite (Columnas, LOW);
 //}
  }
  

