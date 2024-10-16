#include <iostream>
using namespace std;

int main(){
    int valor = 42; //declaração normal
    int *apt;       //declaração de um ponteiro

    apt = &valor; //apt recebe o endereço de memória de valor

    //imprimindo o endereõ de memória e o valor
    cout << "Endereco de valor: "<< apt << endl;  //mostra o endereço da variavel valor
    cout << "Valor armazenado em valor: " << *apt << endl; // acessa o dado na variavel valor pelo ponteiro;

    return 0;
}