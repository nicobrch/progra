#include "librerias.h"
int main(){
  int numeroGanador, numeroJugado;
  cout << "Ingrese el numero jugado" << endl;
  cin >> numeroJugado;
  cout << "Ingrese el numero ganador" << endl;
  cin >> numeroGanador;
  if (numeroGanador == numeroJugado){
    cout << "Gano premio mayor" << endl;
  } else if (numeroGanador/100 == numeroJugado/100 || numeroGanador%100 == numeroJugado%100){
    cout << "Gano premio par" << endl;
  } else if (numeroGanador%10 == numeroJugado%10){
    cout << "Gano premio termino" << endl;
  } else {
    cout << "No gano premio :(" << endl;
  }
  return 0;
}