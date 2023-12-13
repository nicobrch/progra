#include <iostream>
using namespace std;

int main(){
    int n = 82;
    int contadorMult = 0, contadorDiv = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            // CUANDO ES PAR
            n = (n/2);
            contadorDiv++;
        }
        else
        {
            // CUANDO ES IMPAR
            n = (n * 3) + 1;
            contadorMult++;
        }
    }
    cout << "Veces que se multiplicó: " << contadorMult << endl;
    cout << "Veces que se dividió: " << contadorDiv << endl;
    return 0;
}