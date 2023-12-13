#include <iostream>
using namespace std;

void ordenado(int arr[10]){
    for (int i=9; i>0; i--){
        for (int j=i-1; j>=0; j--){
            if (arr[i] > arr[j]){
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

void ordenar(int arr[10]){
    for (int i=0; i<10-1; i++){
        for (int j=i+1; j<10; j++){
            if (arr[i] > arr[j]){
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

int main(){
    int arr[10] = {1, 1, 1, 5, 5, 6, 7, 4, 3, 9};
    ordenado(arr);
    for (int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}