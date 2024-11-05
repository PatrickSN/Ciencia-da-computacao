#include <iostream>
using namespace std;


int main(){
    int numero;
    int soma_divi = 1;
    cin >> numero;
    for (int i=2;i<numero;i++){
        if (numero%i == 0){
            soma_divi += i;
        }
    }
    if (soma_divi == numero){
        cout << "SIM" << endl;
    }
    else{
        cout << "NAO" << endl;
    }
return 0;
};