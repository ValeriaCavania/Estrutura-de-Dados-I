#include <iostream>

using namespace std;
//percorre o vetor de trás pra frente
int busca_sequencial(int x, int n, int v[]){
    int k;
    for(k = n-1; k >= 0; k--){
        if(v[k] == x)
            return k;
    }

    return -1; // se nao encontrar
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
    
    if(resultado != -1){
        cout<< "valor encontrado";
    }else{
            cout<<"valor nao encontrado";
    }
    

    /*resultado = busca_sequencial(x, n, vetor);
    cout << "o resultado da busca sequencial foi: " << resultado << endl;*/

    return 0;
}