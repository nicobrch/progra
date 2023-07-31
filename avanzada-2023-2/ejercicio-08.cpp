#include "librerias.h"
class Persona{
protected:
    string nombre;
    int edad;
public:
    Persona(string n, int e){
        nombre = n;
        edad = e;
    }
};
class Musico : public Persona {
private:
    string instrumento;
public:
    Musico(string _instrumento, string _nombre, int _edad) : Persona(_nombre, _edad){
        instrumento = _instrumento;
    }
    string getInstrumento(){ return instrumento; }
};
class Banda {
private:
    Musico *bateria;
    Musico *guitarra;
    Musico *bajo;
    Musico *cantante;
public:
    Banda(Musico *bat, Musico *gui, Musico *baj, Musico *can){
        bateria = bat;
        guitarra = gui;
        bajo = baj;
        cantante = can;
    }
    bool verificar(){
        bool cumple = true;
        if (bateria->getInstrumento() != "bateria"){ cumple = false; }
        if (guitarra->getInstrumento() != "guitarra"){ cumple = false; }
        if (bajo->getInstrumento() != "bajo"){ cumple = false; }
        if (cantante->getInstrumento() != "cantante"){ cumple = false; }
        if (cumple){
            cout << "Si cumple" << endl;
            return true;
        } else {
            cout << "No cumple" << endl;
            return false;
        }
    }
};