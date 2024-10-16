#include <iostream>

using namespace std;
struct teste_registro{
    int numero;
    char letra;
};

int main(){

    teste_registro vetor[3];

    //declara o ponteiro do tipo de dado teste_registro
    teste_registro *apt;
    //o ponteiro aponta para variavel reg que é tipo teste_registro
    apt = vetor;

    for(int i = 0; i < 3; i++){
        cout << "Informe os dados do registro " << i << endl;
        cout << "Numero: ";
        cin >> (*apt).numero;
        cout << "Letra: ";
        cin >> apt->letra;

        apt++; // passa para a próxima posição do vetor
    }

    cout << endl;

    for(int i = 0; i < 3; i++){
        cout << vetor[i].numero << " " << vetor[i].letra << endl;
    }


    return 0;
}