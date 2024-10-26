#include <iostream>

using namespace std;
//percorre o vetor de trás pra frente

int busca_sequencial(int x, int n, int v[]){
    if (n == 0){
        return -1;
    }
    if(x == v[n-1]){
        return n-1;
    }
    /*se o valor nao for encontrado uma nova chamada é feita com os parametros
    x, n-1 e o vetor. Se o parametro n for 0, nao encontrou e a funcao retorna -1*/
    return busca_sequencial(x, n-1, v);
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
   //pra testar se o valor foi encontrado
    if(resultado != -1){
        cout<< "valor encontrado";
    }else{
            cout<<"valor nao encontrado";
    }
    

    return 0;
}