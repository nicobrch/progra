#include "librerias.h"
class Gato {
private:
    string nombre;
    string color;
    int edad;
public:
    Gato(string n, string c, int e) {
        nombre = n;
        color = c;
        edad = e;
    }
};
class Veterinario {
private:
    Gato *gatos[10];
public:
    Veterinario(){
        for (int i=0; i<10; i++){
            gatos[i] = NULL;
        }
    }
    void agregarGato(Gato *g){
        bool agregado = false;
        for (int i=0; i<10; i++){
            if (gatos[i] == NULL){
                gatos[i] = g;
                agregado = true;
                cout << "Gato agregado" << endl;
            }
        }
        if (agregado == false){
            cout << "No se pudo agregar al gato" << endl;
        }
    }
};

int main(){
    Gato *gatoUno = new Gato("Cucho", "Naranja", 6);
    Gato *gatoDos = new Gato("Cucha", "Calico", 2);
    Veterinario *vet = new Veterinario();
    vet->agregarGato(gatoUno);
    vet->agregarGato(gatoDos);
    return 0;
}