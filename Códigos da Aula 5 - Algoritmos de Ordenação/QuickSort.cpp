#include <iostream>

using namespace std;

// Função para trocar dois elementos
void troca(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para particionar o vetor
int particiona(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto]; // Escolhendo o último elemento como pivô
    int i = baixo - 1;      // Índice do menor elemento

    for (int j = baixo; j < alto; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            troca(vetor[i], vetor[j]); // Troca os elementos
        }
    }
    troca(vetor[i + 1], vetor[alto]); // Coloca o pivô na posição correta
    return (i + 1); // Retorna a posição do pivô
}

// Função QuickSort
void quickSort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        // Particiona o vetor e obtém o índice do pivô
        int pi = particiona(vetor, baixo, alto);

        // Ordena os elementos antes e depois da partição
        quickSort(vetor, baixo, pi - 1);
        quickSort(vetor, pi + 1, alto);
    }
}

int main() {
    int n;
    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    // Verifica se o tamanho do vetor é válido
    if (n <= 0) {
        cout << "O tamanho do vetor deve ser maior que zero." << endl;
        return 1; // Encerra o programa em caso de erro
    }

    int *vetor = new int[n]; // Alocação dinâmica do vetor
    for (int i = 0; i < n; i++) {
        cout << "Informe o valor do elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    quickSort(vetor, 0, n - 1); // Chama a função QuickSort

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor; // Libera a memória alocada

    return 0; // Finaliza o programa com sucesso
}