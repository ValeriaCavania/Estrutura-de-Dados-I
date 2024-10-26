#include <iostream>

using namespace std;
//percorre o vetor de frente pra trás
/*Ao inves de testar se o valor do vetor na posição k é igual ao valor que se procura, 
testamos se o valor na posição atual no vetor for menor que o valor X (X é valor q se procura).
Se for igual o loop para, indicando que o dado foi encontrado - Issp é valido para 
um vetor já ordenado */
int busca_sequencial(int x, int n, int v[]){
    int k = 0;
    while (k < n && v[k] < x){
        k++;
    }
    return k; // se o valor nao é encontrado, retorna o valor do vetor.
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

    cout << "Informe o valor que deseja procurar no vetor para retornarmos o indice: "<< endl;
    cin >> x;

    resultado = busca_sequencial(x, n, vetor);
    /*se o X elemento que se busca foi encontrado, testamos se o indice devolvido
    pela função corresponde a um indice valido do vetor, ou seja, verifica se é menor
    que o valor de n.
    tb é testado após a busca se o valor retornado corresponde a 
    um indece valido do vetor e se o valor na posicao K do vetor é igual
    ao procurado*/
    if(resultado < n && vetor[resultado] == x){
        cout<< "valor encontrado";
    }else{
            cout<<"valor nao encontrado";
    }
    

    return 0;
}