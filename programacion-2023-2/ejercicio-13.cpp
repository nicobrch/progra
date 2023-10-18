#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> productos;
    map<string, int>::iterator it;
    string nombre;
    int cantidad;

    while (true) {
        cout << "Ingrese un nombre de producto" << endl;
        cin >> nombre;
        if (nombre == "exit") {
            break;
        }
        cout << "Ingrese cantidad" << endl;
        cin >> cantidad;
        productos[nombre] = cantidad;
    }

    for (it = productos.begin(); it != productos.end(); it++) {
        cout << "Producto: " << it->first << endl;
        cout << "Cantidad: " << it->second << endl;
    }

    return 0;
}