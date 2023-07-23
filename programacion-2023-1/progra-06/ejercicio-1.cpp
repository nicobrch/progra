#include <iostream>
using namespace std;

float calcularPromedio(float arreglo[10]){
	float suma = 0;
	cout << "Ingrese 10 valores" << endl;
	for(int i=0; i < 10; i++)
	{
		cin>>arreglo[i];
		suma += arreglo[i];
	}
	return suma/10;
}

int main(){
	float arreglo[10];
	cout << calcularPromedio(arreglo);
	return 0;
}
