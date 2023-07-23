//
// Created by nicolas on 12-01-2023.
//

/*
 * Realice un programa que calcule el capital final del interés compuesto, donde el usuario ingresa "capitalInicial", "interes" y "periodo", respecto a la siguiente fórmula:
 * Cf = Ci ( 1 + i ) ^ n
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int capitalInicial, periodo;
    float interes;
    cout << "Ingrese capital inicial" << endl;
    cin >> capitalInicial;
    cout << "Ingrese tasa de interes (5% = 0.05)" << endl;
    cin >> interes;
    cout << "Ingrese el periodo" << endl;
    cin >> periodo;
    float capitalFinal = capitalInicial * pow(( 1 + interes ), periodo);
    cout << "El capital final es: " << capitalFinal;
}