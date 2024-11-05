#include <iostream>



struct Contador{
    //Dados
    int _num;
    //Operacoes
    //Construtor
    Contador(int num){
        _num = num;
    }

    void imprimirValor(){
        std::cout << _num << std::endl;
    }

    void incrementar(){
        _num++;
    }

    void resetarValor(){
        _num = 0;
    }

    void decrementar(){
        if (_num > 0){
            _num--;
        }
    }
};
