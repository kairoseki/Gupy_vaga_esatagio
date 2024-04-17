#include <iostream>

using namespace std;

bool pertenceFibonacci(int num) {
  int anterior = 0;
  int atual = 1;
  int proximo;

  if (num == 0 || num == 1) {
    return true;
  }

  
  while (atual <= num) {
    proximo = anterior + atual;
    anterior = atual;
    atual = proximo;

    
    if (atual == num) {
      return true;
    }
  }


  return false;
}

int main() {
  
  int num;
  cout << "Digite um número: ";
  cin >> num;

  bool pertence = pertenceFibonacci(num);

  if (pertence) {
    cout << num << " pertence à sequência de Fibonacci." << endl;
  } else {
    cout << num << " não pertence à sequência de Fibonacci." << endl;
  }

  return 0;
}
