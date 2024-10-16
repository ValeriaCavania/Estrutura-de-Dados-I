#include <iostream>

using namespace std;

int main(){
    int n;
    //declara o ponteiro de forma dinamica
    int *valores = new int[5]; //era igual int *apt = new int

    //verificando se a memoria foi realmente alocada:
    if(valores == nullptr){
        cout << "A memoria nao foi realizada! Abortando...";
        return -1;
    }

    //faz a leitura dos valores:
    for(int i = 0; i < 5; i++){
        cout << "Informe o valor do indice " << i << ": ";
        cin >> n;
        *(valores + i ) = n; 
        // o ponteiro está incrementando com o loop, a cada i 
        //IRÁ APONTAR para um novo indice de memoria que guarda o valor.
    }

    //fazendo a soma:
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma = soma + *(valores + i);
    }

    cout << "Soma dos valores: " << soma << endl;

    //desaloca a memoria do ponteiro:
    delete [] valores;

    //verifica se foi feito a desalocação:
    if(valores == nullptr){
        cout << "A desalocacao foi feita com sucesso";
    }


    return 0;
}