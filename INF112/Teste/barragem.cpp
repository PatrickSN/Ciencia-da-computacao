#include <iostream>
using namespace std;


int main(){
    int P, T, evacuados, sobreviventes = 0;
    cin >> P >> T;
    for(int i=1; ;i++){
        cin >> evacuados;
        if (evacuados == -1){
            break;
        }
        if (i<=T){
            sobreviventes += evacuados;
        }
    }
    if (P == sobreviventes){
        cout << "Todos a salvo" << endl;
    }
    else{
        cout << "Apenas " << sobreviventes << " pessoas a salvo" << endl;
    }
    
    return 0;
}