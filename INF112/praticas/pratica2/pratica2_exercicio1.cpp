#include <iostream>
#include <stdlib.h>
#include <time.h>


void preencheAleatorios(int *arr, int n) {
    //Uma funcao preencheAleatorios que recebe como parametro um arranjo de inteiros e um
    //numero n e, entao, preenche o arranjo com n numeros aleatorios entre 0 e 9
    // insira seu codigo aqui ...
    for(int i=0; i<n; i++){
        arr[i] = rand() % 10;
    }
}

void imprime(int *arr, int n) {
    //Uma funcao imprime que recebe como parametro um arranjo de inteiros e um numero n e,
    //entao, imprime esse arranjo na tela
    // insira seu codigo aqui ...
    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void contaParImpar(int *a, int *b, int n, int *par, int *impar) {
    //Uma funcao contaParImpar que recebe como parametro dois arranjos a, b, o tamanho n
    //desses arranjos, um inteiro par e um inteiro ımpar e, entao, conta a quantidade de numeros
    //par/ımpar que ha nas n jogadas.
    // insira seu codigo aqui ...
    *par = 0;
    *impar = 0;

    for(int i=0; i<n; i++){
        if((a[i] + b[i])%2 == 0){
            (*par)++;
        }
        else{
            (*impar)++;
        }
    }
}

int main(){
    // insira seu codigo aqui ...
    int n;
    srand(time(NULL));

    while (1){
        std::cout << "Digite a quantidade de jogadas a simular: ";
        std::cin >> n;

        if(n < 0) break;

        int *a = new int;
        int *b = new int;

        preencheAleatorios(a, n);
        preencheAleatorios(b, n);

        imprime(a, n);
        imprime(b, n);

        int par, impar;
        contaParImpar(a, b, n, &par, &impar);
        std::cout << "Par: " << par << std::endl;
        std::cout << "Impar: " << impar << std::endl;

        delete a;
        delete b;
    }
    
    return 0;
}