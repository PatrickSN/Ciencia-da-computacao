#include <iostream>
#include <cmath>

struct Cubo {
    //Dados
    float _lado;

    //Operacoes
    //Construtor
    Cubo(float lado){
        _lado = lado; 
    }

    float calculaAreaCubo() {
        return 6 * std::pow(_lado, 2);
    }

    float calculaVolumeCubo() {
        return std::pow(_lado, 3);
    }
};
