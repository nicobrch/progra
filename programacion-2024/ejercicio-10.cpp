/*
Desarrolle la traza de ejecución del siguiente programa, indicando los valores de las variables y, si cumplen o no, las condiciones.
int main(){
  int i, int termino;
  int surut = 123456789;
  // debe reemplazar 123456789 por su rut sin dígito verificador
  termino = (surut % 1000) + 60;
  for (i = 1; i <= termino; i++){
    if (i>5) {
      i = i * 4;
    }
    cout << "I vale: " << i*2 << endl;
    if (i>30){
      i = i + 5;
    }
    cout << "Ahora I vale: " << i * 5 << endl;
  }
}
*/