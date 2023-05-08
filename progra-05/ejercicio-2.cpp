#include <iostream>
bool esTriangulo(int a, int b, int c){
    if (a+b>c && a+c>b && b+c>a){
        return true;
    }
    return false;
}
void imprimir(bool resultado){
    if (resultado){
        std::cout << "Si conforma un triangulo" << std::endl;
    } else {
        std::cout << "No conforma un triangulo" << std::endl;
    }
}
int main(){
    int a, b, c;
    a = 3;
    b = 4;
    c = 5;
    imprimir(esTriangulo(a, b, c));
    return 0;
}