#include <iostream>

using namespace std;

int main(){
    //declara a variavel
    int vetor[10];

    //preenche os valores
    for(int i =0; i < 10; i++){
        vetor[i] = i * 10;
    }

    //declara os ponteiro

    int *apt_vetor0;
    int *apt_vetor3;

    //passa o endereço de memória para o ponteiro 
    apt_vetor0 = vetor;
    apt_vetor3 = vetor + 3;

    //comportamento esperado 0 e 30
    cout << *apt_vetor0 << " " << *apt_vetor3;


    return 0;
}