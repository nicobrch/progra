#include "librerias.h"
class CuentaCorriente{
private:
    int rut;
    int saldo;
    Persona *miembros[5];
public:
    CuentaCorriente(){
        for (i=0; i<5; i++){
            miembros[i] = NULL;
        }
    }
        CuentaCorriente(int rut_, int saldo_){
            rut = rut_;
            saldo = saldo_;
        }
    void girar(int monto){
        if (miembro[0] != NULL)
        if (saldo<monto){
            cout << "error" << endl;
        } else {
            saldo = saldo - monto;
        }
    }
};
int main(){
    CuentaCorriente *personaUno = new CuentaCorriente(10, 10000);
    personaUno->setSaldo(10000);
    personaUno->girar(5000);
    return 0;
}