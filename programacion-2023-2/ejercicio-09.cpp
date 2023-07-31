#include "librerias.h"
int main(){
    int numero, auxiliar, largo = 0;
    // Verificar que sea un numero con N cifras donde N es impar
    while(true){
        cout << "Ingrese un numero de N cifras con N impar" << endl;
        cin >> numero;
        if (numero%2 != 0){
            break;
        } else {
            cout << "Su numero no tiene N cifras impar" << endl;
        }
    }
    auxiliar = numero;
    // Obtener tamaño N (cuantas cifras hay)
    while(auxiliar > 0){
        largo++;
        auxiliar = auxiliar / 10;
    }
    // Comparar primer digito con ultimo
    bool espejo = true;
    int primerDigito, ultimoDigito, potencia, division;
    while (numero > 0){
        potencia = pow(10, largo);
        cout << "pot: " << potencia << endl;
        division = pow(10, largo-1);
        cout << "div: " << division << endl;
        primerDigito = (numero % potencia) / division;
        cout << "primer: " << primerDigito << endl;
        ultimoDigito = numero % 10;
        cout << "ultimo: " << ultimoDigito << endl;
        if (primerDigito != ultimoDigito) {
            espejo = false;
            break;
        }
        numero = (numero % division) / 10; // Quitamos primer y ultimo digito
        largo = largo - 2; // Ya que quitamos el primer y ultimo digito, le quitamos 2 al largo
    }
    if (espejo){
        cout << "El numero es espejo" << endl;
    } else {
        cout << "No es espejo" << endl;
    }
    return 0;
}