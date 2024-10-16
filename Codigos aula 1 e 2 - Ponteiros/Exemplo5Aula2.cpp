#include <iostream>

using namespace std;

int somaVetor(int vetor[], int numero){
    int soma = 0;

    for(int i = 0; i < numero; i++){
        soma = soma + vetor[i];
    }
    return soma;
}
int somaVetorPonteiro(int *vetor, int numero){
    int soma = 0;
    int *apt;
    int *apt_fim = vetor + numero;

    for (apt = vetor; apt < apt_fim; apt++){ // apt = vetor é igual apt = &vetor
        soma = soma + *apt;
    }
    return soma;
}
 void preencherVetor(int vetor[], int numero){
    for(int i = 0; i < numero; i++){
        cout <<"Entre com o numero " << i << ": " <<endl;;
        cin >> vetor[i];
    }
 }

int main(){

    int vetor[5];
    int numero = 5;

    preencherVetor (vetor, numero);

    int resul1 = somaVetor(vetor, numero);
    cout << "Soma: "<< resul1 << endl;

    
    int result2= somaVetorPonteiro(vetor, numero);
    cout << "Soma por Ponteiro: "<< result2 << endl;

    
    return 0;
}
