#include "librerias.h"
int main(){
    int numero;
    cout << "Ingrese un numero de 9 digitos" << endl;
    cin >> numero;
    // Ejemplo 123494321
    int primer, segundo, tercero, cuarto, sexto, septimo, octavo, noveno;
    primer = (numero%1000000000)/100000000;
    segundo = (numero%100000000)/10000000;
    tercero = (numero%10000000)/1000000;
    cuarto = (numero%1000000)/100000;
    sexto = (numero%10000)/1000;
    septimo = (numero%1000)/100;
    octavo = (numero%100)/10;
    noveno = numero%10;
    if (primer == noveno && segundo == octavo && tercero == septimo && cuarto == sexto){
        cout << "Es espejo" << endl;
    } else {
        cout << "No es espejo" << endl;
    }
    return 0;
}