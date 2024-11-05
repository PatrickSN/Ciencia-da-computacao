#include <iostream>
#include "Contador.h"
#include "Horario.h"
#include "Data.h"
#include "Cubo.h"



int main() {
    std::cout << "Contador: " << std::endl;
    Contador c(1);
    c.incrementar();
    c.imprimirValor();
    c.resetarValor();
    c.decrementar();

    
    std::cout << "Horario: " << std::endl;
    Horario h(13, 35, 15);
    h.exibeHorarioUniversal ();
    h.exibeHorarioPadrao();


    std::cout << "Data: " << std::endl;
    Data d1(13, 12, 2021);
    d1.exibirDataFormatoNumero();
    d1.exibirDataPorExtenso();
    d1.obterDataEmSegundos();


    std::cout << "Cubo: " << std::endl;
    float area, volume;
    Cubo *cubo = new Cubo(3.0);
    area = cubo->calculaAreaCubo();
    std::cout <<  area << std::endl;
    volume = cubo->calculaVolumeCubo();
    std::cout << volume << std::endl;
    delete cubo;


return 0;
} 