#include "librerias.h"
int main(){
  int numero;
  cout << "Ingrese un numero de 3 digitos" << endl;
  cin >> numero;
  cout << "El numero " << numero << " al reves es: " << numero%10 << (numero%100)/10 << numero/100 << endl;
  return 0;
}