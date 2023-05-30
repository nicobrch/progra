#include <iostream>
using namespace std;

int total_recaudado = 0;
int costa[200], cancha[400], vip[100];

void inicializar(){
	for (int i=0; i<200; i++){
		costa[i] = 0;
	}
	for (int i=0; i<400; i++){
		cancha[i] = 0;
	}
	for (int i=0; i<100; i++){
		vip[i] = 0;
	}
}

void entradasDisponibles(){
	int contador = 0;
	for (int i=0; i<200; i++){
		if (costa[i] == 0){
			contador++;
		}
	}
	cout << "Entradas de costa disponibles: " << contador << endl;
	contador = 0;
	for (int i=0; i<400; i++){
		if (cancha[i] == 0){
			contador++;
		}
	}
	cout << "Entradas de cancha disponibles: " << contador << endl;
	contador = 0;
	for (int i=0; i<100; i++){
		if (vip[i] == 0){
			contador++;
		}
	}
	cout << "Entradas vip disponibles: " << contador << endl;
}

void venderEntrada(int tipo){
	if (tipo == 1){
		//	vender entrada costa
		for (int i=0; i<200; i++){
			if (i == 199 && costa[i] == 1){
				cout << "No existen cupos disponibles." << endl;
				break;
			}
			if (costa[i]==0){
				cout << "Entrada vendida!" << endl;
				costa[i] = 1;
				total_recaudado += 2000;
			}
		}
	} else if (tipo == 2){
		//	vender entrada cancha
		for (int i=0; i<400; i++){
			if (i == 399 && cancha[i] == 1){
				cout << "No existen cupos disponibles." << endl;
				break;
			}
			if (cancha[i]==0){
				cout << "Entrada vendida!" << endl;
				cancha[i] = 1;
				total_recaudado += 1000;
			}
		}
	} else if (tipo == 3){
		//	vender entrada vip
		for (int i=0; i<100; i++){
			if (i == 99 && vip[i] == 1){
				cout << "No existen cupos disponibles." << endl;
				break;
			}
			if (vip[i]==0){
				cout << "Entrada vendida!" << endl;
				vip[i] = 1;
				total_recaudado += 4000;
			}
		}
	} else {
		cout << "Tipo incorrecto" << endl;
	}
}

int main(){
	int opcion;
	while (opcion != 0)
	{
		cout << "-- Bienvenido al Estadio Nacional --" << endl;
		cout << "1. Vender entrada" << endl;
		cout << "2. Entradas disponibles" << endl;
		cout << "3. Total recaudado" << endl;
		cout << "0. Terminar programa" << endl;
		cin >> opcion;
		if (opcion == 1){
			cout << "Seleccione tipo de entrada: " << endl;
			cout << "1. Costa | 2. Cancha | 3. VIP" << endl;
			cin >> opcion;
			venderEntrada(opcion);
		} else if (opcion == 2){
			entradasDisponibles();
		} else if (opcion == 3){
			cout << "Total recaudado: " << total_recaudado << endl;
		} else if (opcion == 0){
			cout << "Programa terminado." << endl;
			break;
		} else {
			cout << "Opcion incorrecta." << endl;
		}
	}
	return 0;
}
