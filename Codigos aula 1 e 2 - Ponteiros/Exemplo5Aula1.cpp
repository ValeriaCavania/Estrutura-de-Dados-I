#include <iostream>
using namespace std;

int main(){
    int *apt;
    int numero;
    
    numero = 30;
    apt = &numero; /* tem que atribuir ao ponteiro o endereço da memoria da variavel pelo operador & 
    para poder alterar o valor da variavel usando asteristico *apt... usando * <nome do ponteiro>... essa é a receita para
    fazer alteração no valor da variavel através do ponteiro.
    Alem de que para imprimir o valor da variavel atraves do ponteiro tem que usar asteristico (*), se nao usar
    irá apenas imprimir o endereço de memória da variavel. Todo esse entendimento é partindo do fato de que foi 
    feita essa declaração apt = &numero(ponteiro recebe o endereço de memoria da variavel a qual apontará)*/
    cout << "Antes da primeira alteracao: " << endl;
    cout << numero << endl;
    cout << *apt << endl;

    *apt = 35;

    cout << "Depois da primeira alteracao: " << endl;
    cout << numero << endl;
    cout << *apt << endl;

    (*apt)++;

    cout <<"Depois da segunda alteracao: " << endl;
    cout << numero << endl;
    cout << *apt << endl;

    *apt = *apt - 9;

    cout << "Depois da terceira alteracao: " << endl;
    cout << numero << endl;
    cout << *apt << endl;



    cout << "1 - Valor da Variavel Numero: " << numero << endl;
    cout << "2 - Valor do Ponteiro que aponta para Numero (variavel): " << *apt << endl;
    cout << "3 - Endereco da varialvel Numero apontado pelo ponteiro: " << apt << endl;
    cout << "4 - Endereco do Ponteiro: " << &apt << endl;
    cout << "5 - Endereco da variavel Numero: " << &numero << endl;


}