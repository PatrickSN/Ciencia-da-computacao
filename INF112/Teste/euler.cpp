#include <iostream>
#include <iomanip>
using namespace std;

double fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return fatorial(n-1)*n;
    }
}


int main(){
    int numero;
    cin >> numero;
    double soma=0;
    for (; numero>0;numero--){
        soma += (1/fatorial(numero-1));
    }
    cout << fixed << setprecision(4) << soma << endl;

return 0;
};