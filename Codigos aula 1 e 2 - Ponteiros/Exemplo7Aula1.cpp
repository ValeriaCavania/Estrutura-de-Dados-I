#include <iostream> using 
using namespace std;

void troca_referencia (int &n1, int &n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}
 //troca de numeros usando ponteiros
void troca_ponteiro (int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
void troca_valor (int n1, int n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}
int main(){
    int a, b;
    a = 10;
    b = 999;
    cout <<  "Antes da troca - referencia: a = "<< a << " b = " << b << endl;

    //trocamos os numeros usando referencia
    troca_referencia(a,b);
    cout << "Depois da troca - refencia: a = " << a << " b = " << b << endl;

    //situação inicial 
    a = 10;
    b = 999;
    cout <<  "Antes da troca - ponteiro: a = "<< a << " b = " << b << endl;

    //por ser ponteiros, deve se usar & para indicar o endereço de memoria de "a" e "b"
    troca_ponteiro(&a, &b);
    cout <<"Depois da troca - ponteiros: a = "<< a << " b = "<< b << endl;

    //situação inicial 
    a = 10;
    b = 999;
    cout <<  "Antes da troca - valor: a = "<< a << " b = " << b << endl;

    troca_valor(a, b);
    cout << "Depois da troca - valor: a = "<< a << " b = " << b << endl;





}
