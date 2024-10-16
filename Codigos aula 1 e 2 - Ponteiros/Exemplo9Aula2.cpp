#include <iostream>

using namespace std;

struct teste_registro{
    int numero;
    char letra;
};

int main(){
    teste_registro reg;

    teste_registro *apt;

    apt = &reg;

    return 0;
}

    
