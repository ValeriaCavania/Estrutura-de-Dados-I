#include <iostream>

using namespace std;

int main(){

    int numero;
    int *apt;

    apt = &numero;

    int **apt_duplo;

    apt_duplo = &apt;
    
    **apt_duplo = 63;

    cout << "1 - Endereco de memoria de apt_duplo: " << &apt_duplo << endl;
    cout << "2 - Comparando &apt com apt_duplo: "  << &apt << " " << apt_duplo << endl;
    cout << "3 - Comparando apt com *apt_duplo: " << apt << " " << *apt_duplo << endl;
    cout <<"4 - endereco de numero: " << &numero << endl;
    cout << "4 - Comparando *apt com **apt_duplo: " << *apt << " " << **apt_duplo << endl;
    cout << "5 - Comparando numero com **apt_duplo: " << numero << " "<< **apt_duplo << endl;

    return 0;
}