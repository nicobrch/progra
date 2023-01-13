//
// Created by nicolas on 12-01-2023.
//

/*
 * Solicite al usuario un número entero de 3 digitos e imprima el mismo número al revés. Ejemplo: 345 -> 543
 */

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero de 3 digitos" << endl;
    cin >> numero;
    int centena = numero / 100;
    int decena = ( numero % 100 ) / 10;
    int unidad = numero % 10;
    cout << "El numero al reves es: " << unidad << decena << centena << endl;
}