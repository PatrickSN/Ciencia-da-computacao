#include <iostream>
#include <string>



struct Horario{
    //Dados
    int _hora, _minuto, _segundos;
    std::string periodo = " AM";

    //Operacoes
    //Construtor
    Horario(int hora, int minuto, int segundo){
        _hora = hora;
        _minuto = minuto;
        _segundos = segundo;
    }

    void exibeHorarioUniversal(){
        std::cout << _hora << ":" << _minuto << ":" << _segundos << std::endl;
    }

    void exibeHorarioPadrao(){
        if (_hora > 12){
            _hora = _hora-12;
            periodo = " PM";
        }
        else if (_hora == 12){
            periodo = " PM";
        }
        std::cout << _hora << ":" << _minuto << ":" << _segundos << periodo << std::endl;
    }
};
