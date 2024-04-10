/*
El profesor de finanzas le pide realizar una calculadora de interés compuesto. Para esto le indica que el usuario debe ingresar por teclado las variables Capital inicial (Ci), Periodo en meses (n) y Tasa de interés (i). El interés compuesto se calcula utilizando la siguiente fórmula:
*/
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
    return 0;
}