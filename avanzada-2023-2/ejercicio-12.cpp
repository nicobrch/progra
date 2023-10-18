#include <iostream>
#include <vector>
using namespace std;

class Usuario{
private:
    string nombre;
    int edad;
public:
    Usuario(string nombre, int edad){
        this->nombre = nombre;
        this->edad = edad;
    }
    string getNombre(){
        return nombre;
    }
    int getEdad(){
        return edad;
    }
};

int main(){
    vector<Usuario*> usuarios;
    vector<Usuario*>::iterator it;
    string nombre;
    int edad;

    while(true){
        cout << "Hola! Ingresa un nombre" << endl;
        cin >> nombre;
        if (nombre == "exit"){
            break;
        }
        cout << "Ahora ingresa edad" << endl;
        cin >> edad;
        Usuario *user = new Usuario(nombre, edad);
        usuarios.push_back(user);
    }

    for (it = usuarios.begin(); it != usuarios.end(); it++){
        cout << "Nombre: " << (*it)->getNombre() << endl;
        cout << "Edad: " << (*it)->getEdad() << endl;
    }

    return 0;
}