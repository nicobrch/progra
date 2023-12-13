#include "librerias.h"
class Bloque {
protected:
    int altura;
    int ancho;
    int profundidad;
public:
    Bloque(int al, int an, int pr){
        altura = al;
        ancho = an;
        profundidad = pr;
    }
    int getVolumen(){
        return altura*ancho*profundidad;
    }
};
class BloqueColor : public Bloque {
private:
    string color;
    string nombre;
public:
    BloqueColor(string co, string no, int al, int an, int pr) : Bloque(al, an, pr) {
        color = co;
        nombre = no;
    }
};
class Minecraft {
private:
    BloqueColor *piedra[100];
    BloqueColor *pasto[50];
public:
    Minecraft(){
        for (int i=0; i<100; i++){
            // Inicializamos arreglo piedra
            piedra[i] = new BloqueColor("gris", "piedra", 100, 100, 100);
        }
        for (int i=0; i<50; i++){
            // Inicializamos arreglo pasto
            piedra[i] = new BloqueColor("verde", "pasto", 100, 100, 100);
        }
    }
};