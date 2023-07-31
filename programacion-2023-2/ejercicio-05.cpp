#include "librerias.h"
int main(){
    int numero, contadorProducto = 0, contadorDivision = 0;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    while(numero > 1){
        if (numero % 2 == 0){
            // Es par, dividimos
            numero = numero / 2;
            contadorDivision++;
        } else {
            // Es impar, multiplicamos y sumamos 1
            numero = (numero * 3) + 1;
            contadorProducto++;
        }
    }
    // Ejemplo: Numero 7 deberia dar 5 producto y 11 divisiones
    cout << "Cantidad de veces que se multiplico: " << contadorProducto << endl;
    cout << "Cantidad de veces que se dividio: " << contadorDivision << endl;
}