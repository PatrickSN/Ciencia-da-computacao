#include <iostream>


int main(){
    long int value1 = 200000;
    long int value2 = 0;
    // insira seu codigo aqui ...
    long int *longPtr;
    longPtr = &value1;
    std::cout << *longPtr << std::endl;
    value2 = *longPtr;
    std::cout << value2 << std::endl;
    std::cout << &value1 << std::endl;
    std::cout << longPtr << std::endl;
    // insira aqui a resposta para o item ( g ) ...
    //Sim, pois longPtr esta apontando para o endereco de value1, logo ele armazena
    // a informaçao de seu endereco nao de seu valor 
    return 0;
}