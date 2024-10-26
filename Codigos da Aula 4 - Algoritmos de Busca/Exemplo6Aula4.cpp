#include <iostream>

using namespace std;
//percorre o vetor de trás pra frente

int busca_binaria_rec(int x, int esq, int dir, int v[]){
    if(esq == (dir - 1)){
        return dir;
    }else{
        int meio = (esq + dir) / 2;
        if(v[meio] < x){
            return busca_binaria_rec(x, meio, dir, v);
        }else{
            return busca_binaria_rec(x, esq, meio, v);
        }
    }
}

int busca_bin(int x, int n, int v[]){
    return busca_binaria_rec(x, -1, n, v);
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

    cout << "Informe o valor que deseja procurar no vetor para retornar o indice: "<< endl;
    cin >> x;

    resultado = busca_bin(x, n, vetor);
   //pra testar se o valor foi encontrado
    if(vetor[resultado] == x){
        cout<< "valor encontrado";
    }else{
        cout<<"valor nao encontrado";
    }
    delete vetor;

    return 0;
}