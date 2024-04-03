//
// Created by Nico on 27-03-2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int fecha, anio;
    cout << "Ingrese su fecha de nacimiento como AAAAMMDD" << endl;
    cin >> fecha;
    anio = fecha / 10000;
    if (anio >= 1965 && anio <= 1980){
        cout << "Usted es generacion X" << endl;
    } else if (anio >= 1981 && anio <= 1996){
        cout << "Usted es generacion Milenial" << endl;
    } else if (anio >= 1997 && anio <= 2012){
        cout << "Usted es generacion Z" << endl;
    } else {
        cout << "Otra generacion" << endl;
    }
}
