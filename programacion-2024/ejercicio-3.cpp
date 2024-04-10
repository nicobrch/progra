/*
Se conoce como Generación X a los nacidos entre 1965 y 1980, Millenials a los nacidos entre 1981 y 1996 y como Generación Z a los nacidos entre 1997 y 2012. Cree un programa que lea una fecha de cumpleaños en formato "AAAAMMDD" y la guarde en una variable int. Luego, indique si la persona pertenece a Generación X, Millenial o Generación Z. Si no está en esas fechas, deberá decir "Otra generación".
*/
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
    return 0;
}
