#include <iostream>

using namespace std;

void intercala(int esq, int meio, int dir, int vetor[]){
    int n1 = meio - esq + 1;  //tamanaho do subvetor esquedo
    int n2 = dir - meio; ////tamanaho do subvetor esquedo

    //criação de vetores temporários:

    int *vetorEsq = new int[n1];
    int *vetorDir = new int[n2];

    //copiando os dados para os subvetores
   for (int i = 0; i < n1; i++) {
        vetorEsq[i] = vetor[esq + i];
    }
    for (int j = 0; j < n2; j++) {
        vetorDir[j] = vetor[meio + 1 + j];
    }

  int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (vetorEsq[i] <= vetorDir[j]) {
            vetor[k] = vetorEsq[i];
            i++;
        } else {
            vetor[k] = vetorDir[j];
            j++;
        }
        k++;
    }
    // Copia os elementos restantes do subvetor esquerdo, se houver
    while (i < n1) {
        vetor[k] = vetorEsq[i];
        i++;
        k++;
    }

    // Copia os elementos restantes do subvetor direito, se houver
    while (j < n2) {
        vetor[k] = vetorDir[j];
        j++;
        k++;
    }

    // Libera a memória dos subvetores temporários
    delete[] vetorEsq;
    delete[] vetorDir;
}

void mSort(int esq, int dir, int vetor[]){
   
    if(esq < dir){
        int meio =  (esq + dir) / 2;
        //divide a primeira metade
        mSort(esq, meio, vetor);

        //divide a segunda metade
        mSort(meio + 1, dir, vetor);

        intercala(esq, meio, dir, vetor);
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

    mSort(0, n - 1, vetor);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor;

    return 0;
}