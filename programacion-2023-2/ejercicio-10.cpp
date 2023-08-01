#include "librerias.h"
bool esPar(int numero){
    if (numero%2 == 0){
        return true;
    }
    return false;
}
int main(){
    int num = 2;
    if (esPar(num)){
        cout << "Es par!" << endl;
    } else {
        cout << "No es par :(" << endl;
    }
    return 0;
}