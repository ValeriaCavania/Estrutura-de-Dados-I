#include <iostream>
using namespace std;

int main(){
    //declaracao do ponteiro
    int *apt = new int;
    if(apt == NULL){
        cout << "O ponteiro esta apontando para NULL";
        return -1; // encerra o programa
    }

    *apt = 36;

    //Exibimos
    cout << "Posicao: " <<apt << endl;
    cout << *apt << endl;

    delete apt;
}