#include <iostream>
using namespace std;

int main(){
    //declara a variavel
    int vetor[10];
    vetor[0] = 12;

    //declara o ponteiro
    int *apt_vetor;

    //passa o endereço de memória para o ponteiro
    //antes seria assim: apt_vator = &vetor
    //nao precisamos usar &, pois o nome do vetor ja tem o endereço de memória
    apt_vetor = vetor;

    //exibe o primeiro indice do vetor, usando * (asteristico) para pegar o DADO/VALOR:
    cout << *apt_vetor;



    return 0;
}