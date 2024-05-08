/*
Cree una función "esPar" de tipo bool que recibe un número tipo int. Deberá verificar si el número es par, si es par retornará verdadero, o en caso contrario retornará falso.
Programe una función main para probar dicha función, imprimiendo el resultado.
*/

#include <iostream>
using namespace std;

bool esPar(int numero){
  if(numero % 2 == 0){
      return true;
  }else{
      return false;
  }
}

int main(){
  int numero;
  cout << "Ingrese un número: ";
  cin >> numero;
  if(esPar(numero)){
    cout << "El número " << numero << " es par." << endl;
  }else{
    cout << "El número " << numero << " no es par." << endl;
  }
}