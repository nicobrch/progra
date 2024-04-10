/*
El bono "FamiliaresUDP" entrega un bono de $30.000 si el monto promedio de ingresos de una familia es menor a $300.000, para una familia de de 4 o menos integrantes. Si la familia tiene más de 4 integrantes, el bono sube a $50.000. Cree un programa el cuál pregunte por la cantidad de integrantes de la familia, el monto que obtiene cada miembro familiar, y segun el promedio de ingresos indique que bono le corresponde.
*/
#include <iostream>
using namespace std;

int main(){
  int integrantes, monto, total = 0;
  cout << "Ingrese la cantidad de integrantes de la familia: " << endl;
  cin >> integrantes;
  for(int i = 0; i < integrantes; i++){
    cout << "Ingrese el monto que obtiene el integrante " << i + 1 << endl;
    cin >> monto;
    total += monto;
  }
  int promedio = total / integrantes;
  if(promedio < 300000){
    cout << "Bono de $30.000" << endl;
  }else if(integrantes > 4){
    cout << "Bono de $50.000" << endl;
  }else{
    cout << "No hay bono" << endl;
  }
  return 0;
}