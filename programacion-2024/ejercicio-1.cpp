/*
Cree que un programa el cuál pida al usuario que ingrese un número de 3 digitos por teclado. Luego, imprima el mismo número dado vuelta. Ejemplo: 123 -> 321.
*/
#include <iostream>
using namespace std;

int main () {
    int numero;
    cout << "Ingrese numero de 3 digitos" << endl;
    cin >> numero;
    int centena = numero / 100;
    int decena = ( numero % 100 ) / 10;
    int unidad = numero % 10;
    cout << "Su numero es " << unidad << decena << centena << endl;
    return 0;
}