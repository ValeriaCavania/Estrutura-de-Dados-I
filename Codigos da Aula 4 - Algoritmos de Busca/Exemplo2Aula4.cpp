#include <iostream>

using namespace std;
//percorre o vetor de frente pra trás
/*se o contador k for menos que o numero de posições n do vetor e se o valor
correspondente do indice k do veor nao for igual ao valor desejado x, se essas duas
condições forem satisfeitas, uma nova iteração é executada*/
int busca_sequencial(int x, int n, int v[]){
    int k = 0;
    while (k < n && v[k] != x){
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
    
    if(resultado < n){
        cout<< "valor encontrado";
    }else{
            cout<<"valor nao encontrado";
    }
    

    return 0;
}