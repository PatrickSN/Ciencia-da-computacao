#include <iostream>


int calculaTamanhoString1 ( char str[]) {
    // insira seu codigo aqui ...
    int cont = 0; 
    for(int i=0;str[i] != '\0';i++){
        cont++;
    }
    return cont;
}

int calculaTamanhoString2 ( char *str) {
    // insira seu codigo aqui ...
    int cont = 0; 
    for(int i=0;*(str+i);i++){
        cont++;
    }
    return cont;
}

int calculaTamanhoString3 ( char *str) {
    // insira seu codigo aqui ...
    int cont = 0; 
    for(;*str;str++){
        cont++;
    }
    return cont;
}

int main () {
    char str[51];
    std::cout << " Digite alguma string ... ( com ate 50 caracteres ) : " ;
    std::cin.getline( str , 50) ;
    std::cout << " Tamanhos calculados: " << std::endl ;
    std::cout << calculaTamanhoString1( str ) << " " << calculaTamanhoString2(str) << " " << calculaTamanhoString3( str ) ;
    std::cout << std::endl ;
    return 0;
}