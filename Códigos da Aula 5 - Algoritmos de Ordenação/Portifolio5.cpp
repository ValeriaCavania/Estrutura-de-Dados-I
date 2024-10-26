#include <iostream>

using namespace std;

void InsertionSort(int n, int vetor[]){
    int i, j, chave;

    for(i = 1; i < n; i++){
        //salva a posição atual, 1 em uma variavel auxiliar
        chave = vetor[i];
        //procura entre os antecessores quais elementos são maiores que o atual
        j = i - 1;
        while(j >= 0 && vetor[j] > chave){
            //vai movendo para a posição seguinte
            vetor[j+1] = vetor [j];
            j = j - 1;
        }
        //ao achar a posição ideal, coloca na posição certa.
        vetor[j+1] = chave;
        //a posiçao certa é aquela cujos antecessores nao sao maiores que o elemento atual
    }

    cout <<"Vetor ordendado ";
    for(int i = 0; i < n; i++){
        cout<< vetor[i] << " ";
    }
}



int main(){

    int n;
    cout <<"Informe o tamanho do vetor: ";
    cin >> n;
    int *vetor = new int[n];
    for(int i = 0; i < n; i++){
        cout << "informe os valores do vetor: " << i + 1 <<endl;
        cin >> vetor[i];
    }

    InsertionSort(n, vetor);

    delete[] vetor;

    return 0;
}