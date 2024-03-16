#include <iostream>

using namespace std;

int main()
{
  const int numeroSecreto = 10;
  cout << "-------------Encotre o número secreto-----------" << endl;
  int valorDoChute;
  do {
    cout << ">>Digite um numero: ";
    cin >> valorDoChute;

    if(valorDoChute > numeroSecreto){
      cout << "Número digitado é maior que o número secreto" << endl;
    }else if(valorDoChute < numeroSecreto){
      cout << "Número digitado é menor que o número secreto" << endl;
    }
  } while(numeroSecreto != valorDoChute);

  cout << "Parabéns você acertou o numero!" << endl;
}
