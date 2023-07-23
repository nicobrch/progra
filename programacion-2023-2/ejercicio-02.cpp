#include "librerias.h"
int main(){
  float capitalInicial, meses, interes;
  cout << "Ingrese capital inicial" << endl;
  cin >> capitalInicial;
  cout << "Ingrese numero de meses" << endl;
  cin >> meses;
  cout << "Ingrese tasa de interes en decimal" << endl;
  cin >> interes;
  float capitalFinal = capitalInicial * pow(1+interes, meses);
  cout << "El capital final es de: " << capitalFinal << endl;
}