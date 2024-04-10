/*
La conjetura de collatz funciona de la siguiente forma. Si un numero N es impar, lo multiplicamos por 3 y le sumamos 1. Por otro lado, si N es par, lo dividimos en dos. Se realizan dichas operaciones al numero N de forma indefinida hasta que se llegue al numero 1. Haga un programa que realice dichas operaciones y cuente:
La cantidad de veces que se hizo la operación de multiplicar.
La cantidad de veces que se hizo la operación de dividir.
El numero deberá ser ingresado por teclado.
*/
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Ingrese un numero: " << endl;
  cin >> n;
  int multiplicar = 0, dividir = 0;
  while(n != 1){
    if(n % 2 == 0){
      n /= 2;
      dividir++;
    }else{
      n = n * 3 + 1;
      multiplicar++;
    }
  }
  cout << "Se multiplicó " << multiplicar << " veces" << endl;
  cout << "Se dividió " << dividir << " veces" << endl;
  return 0;
}