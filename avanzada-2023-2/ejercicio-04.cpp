#include "librerias.h"
class Luchador{
    int vida;
    int ataque;
    int defensa;
public:
    Luchador(int hp, int atk, int def){
        vida = hp;
        ataque = atk;
        defensa = def;
    }
    void setVida(int hp){ vida = hp; }
    int getVida(){ return vida; }
    int getDefensa(){ return defensa; }
    bool atacar(Luchador *receptor){
        if (receptor->getVida() > 0){
            receptor->setVida(receptor->getVida() - (ataque - receptor->getDefensa()));
            return true;
        }
        return false;
    }
};
int main(){
    int turno = 0;
    Luchador *kungLeo = new Luchador(10, 5, 1);
    Luchador *ladCobra = new Luchador(15, 2, 3);
    while(true){
        if (turno % 2 == 0){
            // Primer turno
            if (kungLeo->atacar(ladCobra)){
                cout << "Kung Leo ataco a Lad Cobra" << endl;
            } else {
                cout << "Kung Leo mato a Lad Cobra" << endl;
                break;
            }
        } else {
            // Segundo turno
            if (kungLeo->atacar(ladCobra)){
                cout << "Lad Cobra ataco a Kung Leo" << endl;
            } else {
                cout << "Lad Cobra mato a Kung Leo" << endl;
                break;
            }
        }
        turno++;
    }
    return 0;
}