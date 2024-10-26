#include <iostream>

using namespace std;

void SelectionSort(int n, int vetor[]){
    int menor, temp;
    //selection sort vai até n-1, pois no elemento n o vetor já estará ordenado
    for(int i = 0; i < n-1; i++){
        menor = i;
        for(int j = i + 1; j <= n-1; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
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

    SelectionSort(n, vetor);

    delete[] vetor;

    return 0;
}