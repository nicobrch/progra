#include "librerias.h"
int main(){
    int fechaNacimiento, auxiliar, dia, mes, anhio, rut;
    cout << "Ingrese su fecha de nacimiento en formato AAAAMMDD" << endl;
    cin >> fechaNacimiento;
    cout << "Ingrese su rut sin digito verificador" << endl;
    cin >> rut;
    anhio = fechaNacimiento / 10000;
    mes = (fechaNacimiento % 10000) / 100;
    dia = fechaNacimiento % 100;
    auxiliar = (anhio + mes + dia) % 100;
    if (auxiliar < 9){
        auxiliar = auxiliar + 10;
    }
    bool contiene = false;
    while (rut >= 10){
        int parDigitos = rut % 100;
        if (auxiliar == parDigitos){
            contiene = true;
        }
        rut = rut / 10;
    }
    if (contiene){
        cout << "Su rut es magico" << endl;
    } else {
        cout << "Su rut no es magico" << endl;
    }
    return 0;
}