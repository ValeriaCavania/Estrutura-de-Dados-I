#include <iostream>

using namespace std;

//procedimento para preencher o vetor 1
void preencherVetor1 (int vetor[], int n, int *p1){
    for(int i = 0; i < n; i++){
        cout << "Entre com o valor " << i + 1 << " no vetor 1" << ": " << endl;
        cin >> vetor [i];
        *(p1 + i) = vetor[i];
    }
}
//procedimento para preencher o vetor 2
void preencherVetor2 (int vetor[], int n, int *p2){
    for(int i = 0; i < n; i++){
        cout << "Entre com o valor " << i + 1 << " no vetor 2" << ": " << endl;
        cin >> vetor [i];
        *(p2 + i) = vetor[i]; /* a cada iteração p2 aponta p/um novo indice da memoria do vetor
        e guarda esse valor.*/
    }
}
//funcao para somar os valores do vetor 1
int somaVetor1(int *p1, int n){
    int soma = 0;
    
    for(int i = 0; i < n; i++){
        soma = soma + *(p1 + i);
    }

    return soma;

}
//funcao para somar os valores do vetor 2
int somaVetor2(int *p2, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + *(p2 + i); /*a cada iteraçao é incrementado o valor do 
        indice do ponteiro, fazendo com que ele percorra o vetor e vai fazendo a soma
        desses valores na variavel soma */
    }
    return soma;
}
//procedimento para somar os valores do vetor 1 e vetor 2
void somaVetor1Vetor2(int *p1, int *p2, int *p3, int n){

    for(int i = 0; i < n; i++){
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }
    /*acessa os elementos do vetor 1 e 2 pelos ponteiros, soma e armazena
    o resultado no vetor 3 atraves do ponteiro -
    semelhante ao *(apt + 4) = 5 que é igual vet[4] = 5 ou p3[i] = p1[i] + p2[i]; */ 
}

void imprimirVetor3(int *p3, int n){
    cout << "Valores do Vetor 3: "<< endl;
    for(int i = 0; i < n; i++){
        cout <<"Soma do Vetor1  "<< "+" <<" Vetor2 " << ": " << *(p3 + i) << endl;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    int *v1 = new int[n];
    int *p1 = new int[n];

    int *v2 = new int[n];
    int *p2 = new int[n];

    int *v3 = new int[n];
    int *p3 = new int[n];
    

    preencherVetor1(v1, n, p1);
    preencherVetor2(v2, n, p2);

    int result1 = somaVetor1(p1, n);
    cout << "Soma Vetor 1: " << result1 << endl;

    int result2 = somaVetor2(p2, n);
    cout<< "Soma Vetor 2: "<< result2 <<endl;

    somaVetor1Vetor2(p1, p2, p3, n);

    imprimirVetor3(p3, n);

    delete [] v1;
    delete [] v2;
    delete [] v3;

    return 0;
}