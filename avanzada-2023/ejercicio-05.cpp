#include "librerias.h"
class Mesa{
private:
    int apruebo;
    int rechazo;
    int nulo;
public:
    Mesa(){
        apruebo = 0;
        rechazo = 0;
        nulo = 0;
    }
    void votar(const string& voto){
        if (voto == "apruebo"){
            apruebo++;
        } else if (voto == "rechazo"){
            rechazo++;
        } else {
            nulo++;
        }
    }
    int getApruebo(){ return apruebo; }
    int getRechazo(){ return rechazo; }
    int getNulo(){ return nulo; }
};
class Elecciones{
private:
    Mesa *mesas[30000];
public:
    Elecciones(){
        for (int i=0; i<30000; i++){
            mesas[i] = new Mesa();
        }
    }
    void estadisticas(){
        int totalApruebo = 0, totalRechazo = 0, totalNulo = 0, total = 0;
        for (int i = 0; i < 30000; i++){
            totalApruebo += mesas[i]->getApruebo();
            totalRechazo += mesas[i]->getRechazo();
            totalNulo += mesas[i]->getNulo();
        }
        total = totalApruebo + totalRechazo + totalNulo;
        cout << "% APRUEBO: " << ( totalApruebo / total ) * 100 << endl;
        cout << "% RECHAZO: " << ( totalRechazo / total ) * 100 << endl;
        cout << "% NULO: " << ( totalNulo / total ) * 100 << endl;
    }
};