#include <iostream>

using namespace std;
struct teste_registro{
    int numero;
    char letra;
};

int main(){

    teste_registro reg;

    //declara o ponteiro do tipo de dado teste_registro
    teste_registro *apt;
    //o ponteiro aponta para variavel reg que é tipo teste_registro
    apt = &reg;

    //atribuição de valores
    reg.numero = 56;
    reg.letra = 'z';

    //verifica as duas formas de acessar os valores
    cout << "numero: " << (*apt).numero << endl;
    cout << "letra: " << (*apt).letra << endl; 



    return 0;
}