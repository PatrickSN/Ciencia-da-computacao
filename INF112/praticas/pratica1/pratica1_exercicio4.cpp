#include <iostream>


struct Jogador {
    int pontos;
    int x, y;
};

void leDadosJogador(Jogador *ptrl, int c) {
    // insira seu codigo aqui ...
    std::cout << "Digite os pontos, x e y para o jogador" << c << ": " << std::endl;
    
    std::cin >> ptrl->pontos;
    std::cin >> ptrl->x;
    std::cin >> ptrl->y;
}

int main() {
    Jogador j[5];
    // insira seu codigo aqui ...
    
    for (int i = 0; i < 5; i++) {
        leDadosJogador(&j[i], i+1);
    }

    std::cout << "\nDados dos jogadores:" << std::endl;
    for (Jogador *ptr = j; ptr < j+5; ptr++) {
        std::cout <<
                "Jogador " << (ptr - j) + 1 <<
                ": pontos= " << ptr->pontos <<
                ", x= " << ptr->x <<
                ", y= " << ptr->y << 
        std::endl;
    }

    return 0;
}
