#include <iostream>
bool esPar(int numero){
    if (numero%2 == 0){
        return true;
    }
    return false;
}
int main(){
    int num = 2;
    if (esPar(num)){
        std::cout << "Es par!" << std::endl;
    } else {
        std::cout << "No es par :(" << std::endl;
    }
    return 0;
}