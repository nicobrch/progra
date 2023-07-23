#include "librerias.h"
int main(){
  int fecha;
  cout << "Ingrese su fecha de cumpleanios en formato AAAAMMDD" << endl;
  cin >> fecha;
  int anio = fecha / 10000;
  int mes = (fecha%10000)/100;
  int dia = fecha % 100;
  if (anio >= 1965 && anio <= 1980){
    cout << "Usted es Generacion X" << endl;
  } else if (anio >= 1981 && anio <= 1996){
    cout << "Usted es Millenial" << endl;
  } else if (anio >= 1997 && anio <= 2012){
    cout << "Usted es Generacion Z" << endl;
  } else {
    cout << "Usted es de otra generacion" << endl;
  }
  return 0;
}