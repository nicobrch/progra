#include "librerias.h"
#define cantidadPreguntas 6

class Pregunta{
private:
    int respuestaCorrecta;
    int respuestaAlumno;
    float puntaje;
public:
    Pregunta(int rc, int ra, float pt){
        respuestaCorrecta = rc;
        respuestaAlumno = ra;
        puntaje = pt;
    }
    float corregir(){
        if (respuestaAlumno == respuestaCorrecta){
            return puntaje;
        } else {
            return 0;
        }
    }
};
class Prueba{
private:
    Pregunta *preguntas[cantidadPreguntas];
public:
    Prueba(){
        for (int i=0; i<cantidadPreguntas; i++){
            preguntas[i] = NULL;
        }
    }
    void agregarPregunta(Pregunta *p){
        bool agregado = false;
        for (int i = 0; i<cantidadPreguntas; i++){
            if (preguntas[i] == NULL){
                preguntas[i] = p;
                agregado = true;
                cout << "Pregunta agregada" << endl;
            }
        }
        if (agregado == false){
            cout << "No se pudo agregar" << endl;
        }
    }
    float getNota(){
        float nota = 0;
        for (int i = 0; i<cantidadPreguntas; i++){
            if (preguntas[i] != NULL){
                nota += preguntas[i]->corregir();
            }
        }
        return nota;
    }
};
int main(){
    Prueba *prueba = new Prueba();
    int respuestaCorrecta, respuestaAlumno;
    float puntaje;
    for (int i=0; i<cantidadPreguntas; i++){
        cout << "Ingrese respuesta correcta" << endl;
        cin >> respuestaCorrecta;
        cout << "Ingrese respuesta alumno" << endl;
        cin >> respuestaAlumno;
        cout << "Ingrese puntaje" << endl;
        cin >> puntaje;
        Pregunta *pregunta = new Pregunta(respuestaCorrecta, respuestaAlumno, puntaje);
        prueba->agregarPregunta(pregunta);
    }
    cout << "La nota es: " << prueba->getNota() << endl;
    return 0;
}