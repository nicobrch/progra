#include <iostream>
using namespace std;

int main(){
    int n = 1234329;
    int aux = 0;
    while ( n > 0)
    {
        aux += (n % 10);
        aux *= 10;
        n = n / 10;
    }
    aux = aux / 10;
    cout << "n " << n;
    cout << "aux " << aux;
    return 0;
}