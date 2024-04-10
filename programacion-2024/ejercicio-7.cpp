/*
Su número de la suerte se calcula de la siguiente manera:
auxiliar = (Año de nacimiento + mes de nacimiento + día de nacimiento) % 100. Si el valor auxiliar < 9 entonces: Número de la suerte es auxiliar + 10. De lo contrario: Número de la suerte es el valor auxiliar. Se pide, cree una aplicación que lea una fecha de nacimiento en formato AAAAMMDD, un rut sin dígito verificador e indique si el rut contiene o no su número de la suerte, en tal caso se dirá que el rut es mágico, de lo contrario será normal.
*/
#include <iostream>
using namespace std;

int main(){
  int fecha, anio, mes, dia, rut;
  cout << "Ingrese su fecha de nacimiento como AAAAMMDD" << endl;
  cin >> fecha;
  cout << "Ingrese su rut sin digito verificador" << endl;
  cin >> rut;
  anio = fecha / 10000;
  mes = (fecha % 10000) / 100;
  dia = fecha % 100;
  int auxiliar = (anio + mes + dia) % 100;
  if(auxiliar < 9){
    int numero_suerte = auxiliar + 10;
    if(rut % 10 == auxiliar + 10){
      cout << "Su rut es mágico" << endl;
    }else{
      cout << "Su rut es normal" << endl;
    }
  }else{
    int numero_suerte = auxiliar;
    if(rut % 10 == auxiliar){
      cout << "Su rut es mágico" << endl;
    }else{
      cout << "Su rut es normal" << endl;
    }
  }
  return 0;
}