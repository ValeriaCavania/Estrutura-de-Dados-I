#include <iostream>

using namespace std;

void BubbleSort(int n, int vetor[]){
    bool trocou;
    for(int i = 0; i <= n; i++){
        trocou = false;
        for(int j = 0; j <= n-1; j++){
            //se for maior que o sucessor
            if(vetor[j] > vetor [j+1]){
                //troca
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocou = true;
            }
        }
        if(trocou  == false){
            break;
        }
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

    BubbleSort(n, vetor);

    delete[] vetor;

    return 0;
}