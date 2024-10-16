#include <iostream>

using namespace std;

int main(){
    //variaveis
    int vetor[5];
    int numero, soma;

    //ponteiro
    int *apt;

    apt = vetor;

    //primeiro loop, pegar valores para o vetor
    for(int i = 0; i < 5 ; i++){
        cout << "Entre com o numero" << i << ": ";
        cin >> numero;
        // o ponteiro está incrementando com o loop, a cada i 
        //IRÁ APONTAR para um novo indice de memoria que guarda o valor.
        *(apt + i) = numero;
    }

    //declaração do ponteiro apt_fim para passar pelas 5 posicoes do vetor
    int *apt_fim = vetor +5;

    //inicializa soma para evitar lixo de memoria
    soma = 0;
    //segundo loop para fazer a soma dos valores do vetor
    for(apt = vetor; apt < apt_fim; apt ++){
        soma = soma + *apt;
    }

    cout << "Soma: " << soma << endl;


    return 0;
}