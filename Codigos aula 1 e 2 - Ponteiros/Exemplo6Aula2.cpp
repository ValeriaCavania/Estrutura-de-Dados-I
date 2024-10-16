#include <iostream>

using namespace std;
//a função usa notação classica de declaração de matriz, mas nada impede
//em usar pela forma de delaração de ponteiros;
void exibeMat(int mat[][3], int linhas, int colunas){ //int mat[][] é o mesmo int mat**
    int *apt, *inicio, *fim;
    int soma = 0;

    inicio = &mat[0][0];

    //da mesma forma que usamos em vetores
    //usamos o numero de linhas e colunas da matriz para acessar a posição final
    // 3*3 = 9 elementos
    fim = inicio + (3*3); // é igual com vetores para marcar o fim: apt = vetor + 5; 
    for(apt = inicio; apt < fim; apt++){
        cout << *apt << " " << endl;
        soma = soma + *apt;
    }
    cout << "Soma dos valores da matriz: " << soma;
}
int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Entre com o valor: " << i << " " << j << " :";
            cin >> matriz[i][j];
        }
    }

    exibeMat(matriz, 3, 3);

    return 0;
}