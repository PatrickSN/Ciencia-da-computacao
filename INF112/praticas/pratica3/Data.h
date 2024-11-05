#include <iostream>
#include <string>


struct Data{
    //Dados
    int _dia, _mes, _ano;
    std::string meses[12] = {
        "Janeiro", "Fevereiro", "Março",
        "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro",
        "Outubro", "Novembro", "Dezembro"
        };

    //Operacoes
    //Construtor
    Data(int dia, int mes, int ano){
        _dia = dia;
        _mes = mes;
        _ano = ano;
    }

    void exibirDataFormatoNumero(){
        std::cout << _dia << "/" << _mes << "/" << _ano << std::endl;
    }

    void exibirDataPorExtenso(){
        std::cout << _dia << " de " << meses[_mes-1] << " de " << _ano << std::endl;
    }

    void obterDataEmSegundos(){
        //1 Hour	3600 Seconds
        //1 Day	86400 Seconds
        //1 Week	604800 Seconds
        //1 Month (30.44 days)	2629743 Seconds
        //1 Year (365.24 days)	31556926 Seconds
        int segundos, dif_anos, dif_meses, dif_dias;
        dif_anos = _ano - 1970;
        dif_meses = _mes - 1;
        dif_dias = _dia - 1;
        segundos = (dif_anos * 31556926) + (dif_meses * 2629743) + (dif_dias * 86400);
        std::cout << segundos << std::endl; 
    }
};
