/*
Un sistema de lotería tiene boletos de 4 números, con tres posibles premios respecto al número ganador.
Premio Mayor: Cuando los 4 números son iguales.
Premio Par: Cuando el primer par es igual o el segundo par es igual.
Premio Término: Cuando el último número es igual.
Cree un programa que ingrese un número ganador y un número jugado, los compare e indique cuál premio recibió respectivamente.
*/
#include <iostream>
using namespace std;

int main(){
  int numero_ganador, numero_jugado;
  cout << "Ingrese el numero ganador: " << endl;
  cin >> numero_ganador;
  cout << "Ingrese el numero jugado: " << endl;
  cin >> numero_jugado;
  int premio = 0;
  if(numero_ganador == numero_jugado){
    cout << "Premio Mayor" << endl;
  }else if(numero_ganador / 1000 == numero_jugado / 1000 || numero_ganador % 1000 / 100 == numero_jugado % 1000 / 100){
    cout << "Premio Par" << endl;
  }else if(numero_ganador % 10 == numero_jugado % 10){
    cout << "Premio Termino" << endl;
  }else{
    cout << "No hay premio" << endl;
  }
  return 0;
}