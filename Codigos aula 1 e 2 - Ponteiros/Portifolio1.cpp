#include <iostream>

using namespace std;

int main(){
    int n1;
    int n2;
    int result;

    int *p1;
    int *p2;

    p1 = &n1;
    p2 = &n2;

    cout << "Informe o valor de n1: ";
    cin >> *p1;
    cout << "Informe o valor de n2: ";
    cin >> *p2;

    result = *p1 + *p2;

    cout << "O resultado da soma: "<< result << endl;
    return 0;
}