/*Um ponteiro é uma variável que armazena a posição de memória do sistema de outra variável declada do
do mesmo tipo de dado que a variável ponteiro. Através dessa variável, podemos acessar a variável localizada
no endereço armazenado atráves desse ponteiro. Declaração de um ponteiro de forma classica:
int *apt;
double *apt_double
Um ponteiro inicialmente possui o valor NULL, pois não stá apontando para nada. Comprovação:*/

#include <iostream>
using namespace std;
int main(){
    int *apt = NULL;

    if(apt == NULL){
        cout <<"o ponteiro esta apontando para NULL\n";
    }
    cout << "\n" << apt;
    cout << "\n "<< &apt;
}
