#include "librerias.h"
bool esTriangulo(int a, int b, int c){
    if (a+b>c && a+c>b && b+c>a){
        return true;
    } else {
        return false;
    }
}
void imprimir(bool resultado){
    if (resultado == true){
        cout << "Si conforma un triangulo" << endl;
    } else {
        cout << "No conforma un triangulo" << endl;
    }
}
int main(){
    int a, b, c;
    a = 3;
    b = 4;
    c = 5;
    bool verificar = esTriangulo(a, b, c);
    imprimir(verificar);
    return 0;
}