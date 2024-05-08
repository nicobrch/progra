/*
Programe una función "bool esTriangulo(float a, float b, float c)" que reciba como parámetros 3 lados (distancia) y compruebe si esos 3 lados conforman un triángulo o no. Con otra función "imprimir", imprima por pantalla "Si conforma un triángulo" o "No conforma un triángulo", dado el resultado de la primera función.
Para comprobar, la suma de dos lados de un triángulo debe ser mayor que el tercero (se debe cumplir para todos los lados), así:
a + b > c
a + c > b
b + c > a
*/

#include <iostream>
using namespace std;

bool esTriangulo(float a, float b, float c){
  if(a + b > c && a + c > b && b + c > a){
    return true;
  }else{
    return false;
  }
}

int main(){
  int a, b, c;
  cout << "Ingrese el lado a: ";
  cin >> a;
  cout << "Ingrese el lado b: ";
  cin >> b;
  cout << "Ingrese el lado c: ";
  cin >> c;
  if(esTriangulo(a, b, c)){
    cout << "Si conforma un triángulo." << endl;
  }else{
    cout << "No conforma un triángulo." << endl;
  }
}