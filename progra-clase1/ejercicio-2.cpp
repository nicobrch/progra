//
// Created by nicolas on 12-01-2023.
//

/*
 * Pida al usuario dos decimales y muestre por pantalla el resultado de la suma, resta, división y producto de los números.
 */

#include <iostream>

using namespace std;

int main() {
    float dec1, dec2;
    cout << "Ingrese el primer numero decimal" << endl;
    cin >> dec1;
    cout << "Ingrese el segundo numero decimal" << endl;
    cin >> dec2;
    cout << "Los resultados son:"
            "\nSuma: " << dec1 + dec2 <<
            "\nResta: " << dec1 - dec2 <<
            "\nDivision: " << dec1 / dec2 <<
            "\nProducto: " << dec1 * dec2;
}