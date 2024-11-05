#include <iostream>
using namespace std;


int main(){
    int secoes, soma=0, soma_d=0, i;
    cin >> secoes;
    int N[secoes] = {0};

    for(int i=0; i<secoes;i++){
        cin >> N[i];
        soma += N[i];
    }
    for(i=0; soma_d<soma/2;i++){
        soma_d += N[i];
    }
    cout << i << endl;
    return 0;
}