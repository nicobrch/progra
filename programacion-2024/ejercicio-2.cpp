//
// Created by Nico on 27-03-2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int capitalFinal, capitalInicial, meses;
    float interes;
    cout << "Ingrese CI, meses, Interes" << endl;
    cin >> capitalInicial >> meses >> interes;
    capitalFinal = capitalInicial * pow((1 + interes), meses);
    cout << "El capital final es: " << capitalFinal << endl;
}