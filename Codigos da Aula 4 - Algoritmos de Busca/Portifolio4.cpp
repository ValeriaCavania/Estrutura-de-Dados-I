#include <iostream>
using namespace std;

int busca_binaria(int x, int n, int v[]){
    int esquerda, meio, direita;
    esquerda = -1;
    direita = n;

    while(esquerda < (direita - 1)){
        meio = (esquerda + direita) / 2;
        if(v[meio] < x){ 
            esquerda = meio;
        }else{
            direita = meio;
        }
    }
    return direita;
}


int main(){

    int n, x, resultado;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *vetor = new int[n];

    for(int i = 0; i < n; i++){
        cout << "informe os valores do vetor: " << i <<endl;
        cin >> vetor[i];
    }

    cout << "Informe o valor que deseja procurar no vetor: "<< endl;
    cin >> x;

    resultado = busca_binaria(x, n, vetor);
   //pra testar se o valor foi encontrado
    if(resultado < n && vetor[resultado] == x){
        cout<< "valor encontrado";
    }else{
        cout<<"valor nao encontrado";
    }
    
    delete vetor;
    
    return 0;
}