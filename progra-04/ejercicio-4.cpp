#include <iostream>
using namespace std;

int main(){
    // formato AAAAMMDD
    // rut 12.345.678
    int fecha, dia, mes, anio;
    int rut, numSuerte;
    cin >> fecha >> rut;
    dia = fecha % 100;
    mes = (fecha % 10000) / 100;
    anio = fecha / 10000;
    int aux = (anio + mes + dia) % 100;
    if (aux < 9){
        numSuerte = aux + 10;
    } else {
        numSuerte = aux;
    }
    int numeroAVerificar;
    bool encontro = false;
    while (rut > 0){
        numeroAVerificar = rut % 100;
        if (numeroAVerificar == numSuerte)
        {
            cout << "Su rut es magico" << endl;
            encontro = true;
            break;
        }
        rut = rut / 10;
    }
    if (!encontro){
        cout << "Su rut no es magico" << endl;
    }
    return 0;
}