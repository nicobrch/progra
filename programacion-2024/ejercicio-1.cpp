//
// Created by Nico on 27-03-2024.
//
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
}