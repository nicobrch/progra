#include "librerias.h"
class CuentaCorriente{
private:
    int rut;
    int saldo;
public:
    void girar(int monto){
        if (saldo - monto < 0){
            cout << "Monto supera el saldo disponible" << endl;
        } else {
            saldo = saldo - monto;
            cout << "Giro realizado. Nuevo saldo: " << saldo << endl;
        }
    }
    void imprimir(){
        cout << "Rut: " << rut << " | Saldo: " << saldo << endl;
    }
    void setRut(int r){
        rut = r;
    }
    void setSaldo(int s){
        saldo = s;
    }
    int getRut(){
        return rut;
    }
    int getSaldo(){
        return saldo;
    }
};
int main(){
    CuentaCorriente *cr = new CuentaCorriente();
    cr->setRut(1234);
    cr->setSaldo(10000);
    cr->girar(500);
    cr->imprimir();
    cr->girar(10000);
    return 0;
}