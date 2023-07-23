//
// Created by nicolas on 12-01-2023.
//

/*
 * Solicite al usuario que ingrese un número entero, para luego imprimir por pantalla la mitad del número que el usuario ingresó.
 */

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero" << endl;
    cin >> numero;
    cout << "La mitad del numero que ingreso es: " << numero / 2 << endl;
}