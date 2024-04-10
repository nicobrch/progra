/*
Un reciente estudio reveló que los llamados números espejos poseen propiedades matemáticas relevantes para el dominio de la computación cuántica . Un número espejo, es un número compuesto de n cifras, donde n siempre es un número impar. Además, sus cifras siguen un patrón de repetición donde el último dígito es igual al primero, el penúltimo es igual al segundo, el antepenúltimo es igual al tercero y así sucesivamente, siguiendo un patrón similar a que existiese un espejo en su cifra central. Por ejemplo el numero 1237321 es un numero espejo.
Considere un numero de 9 dígitos ingresado por el usuario y valide si este cumple con la propiedad espejo. Si cumple, debe imprimir por pantalla: ”Es espejo”, en caso contrario deberá imprimir: ”No es espejo”.
Considere que el programa debe funcionar para cualquier número de N cifras, y debe verificar que N sí sea un número impar.
*/
#include <iostream>
using namespace std;

int main(){
  int numero;
  cout << "Ingrese un número de N dígitos" << endl;
  cin >> numero;
  int aux = numero;
  int cifras = 0;
  while(aux > 0){
    aux /= 10;
    cifras++;
  }
  if(cifras % 2 == 0){
    cout << "El número ingresado no tiene un número impar de dígitos" << endl;
    return 0;
  }
  int auxiliar = numero;
  int espejo = 0;
  for(int i = 0; i < cifras; i++){
    int digito = auxiliar % 10;
    espejo = espejo * 10 + digito;
    auxiliar /= 10;
  }
  if(numero == espejo){
    cout << "Es espejo" << endl;
  }else{
    cout << "No es espejo" << endl;
  }
  return 0;
}