#include <iostream>

using namespace std;

int main(){
    int teste;
    float fracionario;
    bool verdadeiro;

    //declaração

    teste = 0;
    fracionario = 0.5;
    verdadeiro = true;

    //exibindo

    cout << "Posicoes: " << endl;
    cout << "Teste: " <<&teste << endl;
    cout << "Fracionario: " << &fracionario << endl;
    cout << "Verdadeiro: " <<& verdadeiro << endl;
}