#include <iostream>

int main(){
    char str[] = "abc teste" ;

    // Insira o codigo aqui ...
    char *ptr = str;
    for(; *ptr; ptr++);
    for(; ptr >= str;ptr--){
        std::cout << *ptr;
    }    
    std::cout << std::endl;
    // Exemplo de saida para o exemplo acima : etset cba

    return 0;
}