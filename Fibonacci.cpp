#include <iostream>
#include <string>

using namespace std;

string inverteString(string texto) {
  
  int tamanho = texto.length();
  string textoInvertido = "";
  for (int i = tamanho - 1; i >= 0; i--) {  
    textoInvertido += texto[i];
  }

  return textoInvertido;
}

int main() {
 
  string texto;
  cout << "Digite uma string: ";
  getline(cin, texto);

  string textoInvertido = inverteString(texto);

  cout << "String invertida: " << textoInvertido << endl;

  return 0;
}
