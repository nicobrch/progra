#include "librerias.h"
int main(){
    int integrantes, total = 0, monto;
    cout << "Ingrese cantidad de integrantes de su grupo familiar" << endl;
    cin >> integrantes;
    for (int i=0; i<integrantes; i++){
        cout << "Ingrese monto del integrante: " << i + 1 << endl;
        cin >> monto;
        total = total + monto;
    }
    float promedio = total / integrantes;
    if (promedio < 300000){
        // Recibe bono
        if (integrantes <= 4){
            cout << "Recibe bono de $30.000" << endl;
        } else {
            cout << "Recibe bono de $50.000" << endl;
        }
    } else {
        cout << "No recibe bono" << endl;
    }
}