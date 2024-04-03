/*
    El hospital de Pelotillehue, contabiliza los nacimientos en forma mensual generándose estadísticas porcentuales. Para ello utiliza un programa en c++ que opera de la siguiente manera:
    Ingrese nacimientos de chilenos:
    nn //nn valor ingresado por teclado, cantidad de nacimientos
    Ingrese nacimientos de peruanos:
    nn //nn valor ingresado por teclado, cantidad de nacimientos
    Ingrese nacimientos de venezolanos:
    nn //nn valor ingresado por teclado, cantidad de nacimientos
    Ingrese nacimientos de haitianos:
    nn //nn valor ingresado por teclado, cantidad de nacimientos
    Ingrese nacimientos otros países:
    nn //nn valor ingresado por teclado, cantidad de nacimientos
    Estadísticas
    Datos correctos //si la suma de todos los nacimientos es inferior a 1000
    Porcentaje de chilenos c/r al total de nacimientos: p1%
    Porcentaje de peruanos c/r al total de nacimientos: p2%
    Porcentaje de venezolanos c/r al total de nacimientos: p3%
    Porcentaje de haitianos c/r al total de nacimientos: p4%
    Porcentaje de otros países c/r al total de nacimientos: p5%
    Porcentaje total de extranjeros c/r a total de nacimientos: p6%
    //este porcentaje incluye los nacimientos de todos los no chilenos
    Nacieron más xxxx //puede ser chilenos o extranjeros
    Programe el aplicativo c++ que permita operar de acuerdo con el ejemplo dado.
    Se sabe que si la suma de los nacimientos del mes es inferior a 1000 entonces se imprime Datos correctos y luego las estadísticas, en caso contrario SÓLO SE IMPRIMIRÁ Datos Incorrectos (nada más). En forma adicional el aplicativo deberá imprimir al final de las estadísticas un mensaje que indique si han nacido más chilenos o extranjeros.
     TIEMPO 60 minutos
 */

#include <iostream>
using namespace std;

int main(){
    // Ingreso de datos
    int nchilenos, nperuanos, nvenezolanos, nhaitianos, npaises;
    cout << "Ingrese nacimientos de chilenos" << endl;
    cin >> nchilenos;
    cout << "Ingrese nacimientos de peruanos" << endl;
    cin >> nperuanos;
    cout << "Ingrese nacimientos de venezolanos" << endl;
    cin >> nvenezolanos;
    cout << "Ingrese nacimientos de haitianos" << endl;
    cin >> nhaitianos;
    cout << "Ingrese nacimientos de npaises" << endl;
    cin >> npaises;

    // Verificar si los nacimientos es inferior a 1000
    int sumaTotal = nchilenos + nperuanos + nvenezolanos + nhaitianos + npaises;
    if (sumaTotal < 1000){
        cout << "Datos incorrectos" << endl;
        return 0;
    }

    // Estadisticas para datos correctos
    float p1, p2, p3, p4, p5, p6;
    p1 = (nchilenos / sumaTotal) * 100;
    p2 = (nperuanos / sumaTotal) * 100;
    p3 = (nvenezolanos / sumaTotal) * 100;
    p4 = (nhaitianos / sumaTotal) * 100;
    p5 = (npaises / sumaTotal) * 100;
    p6 = ((sumaTotal - nchilenos) / sumaTotal) * 100;

    cout << "Datos correctos" << endl;
    cout << "Porcentaje chilenos c/r total" << p1 << "%" << endl;
    cout << "Porcentaje peruanos c/r total" << p2 << "%" << endl;
    cout << "Porcentaje venezolanos c/r total" << p3 << "%" << endl;
    cout << "Porcentaje haitianos c/r total" << p4 << "%" << endl;
    cout << "Porcentaje otros paises c/r total" << p5 << "%" << endl;
    cout << "Porcentaje extranjeros c/r total" << p6 << "%" << endl;

    if ((sumaTotal - nchilenos) > nchilenos){
        // Hay mas extranjeros que chilenos
        cout << "Nacieron mas extranjeros" << endl;
    } else if ((sumaTotal - nchilenos) < nchilenos){
        // Hay mas chilenos que extranjeros
        cout << "Nacieron mas chilenos" << endl;
    } else {
        cout << "Extranjeros y chilenos tienen la misma cantidad" << endl;
    }

    return 0;
}