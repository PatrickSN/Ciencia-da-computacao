#include "Imagem.h"
#include <iostream>
#include <algorithm>

Imagem::Imagem() : n(0), pixels(nullptr){}

Imagem::~Imagem(){
    for (int i = 0; i < n; i++){
        delete[] pixels[i];
    }
    delete[] pixels;
}

void limitaPixel(int& valor){
    valor = std::max(0, std::min(255, valor));
}

void leImagem(Imagem& img){
    std::cin >> img.n;

    img.pixels = new int*[img.n];
    for (int i = 0; i < img.n; i++){
        img.pixels[i] = new int[img.n];
    }

    for (int i = 0; i < img.n; i++){
        for (int j = 0; j < img.n; j++){
            int valor;
            std::cin >> valor;
            limitaPixel(valor);
            img.pixels[i][j] = valor;
        }
    }
}

void imprimeImagem(Imagem& img){
    for (int i = 0; i < img.n; i++){
        for (int j = 0; j < img.n; j++){
            std::cout << img.pixels[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void soma(Imagem& img1, Imagem& img2, Imagem& imgResultante){
    if (img1.n != img2.n){
        std::cerr << "Erro: Dimensões diferentes!" << std::endl;
        return;
    }

    imgResultante.n = img1.n;
    imgResultante.pixels = new int*[imgResultante.n];
    for (int i = 0; i < imgResultante.n; i++){
        imgResultante.pixels[i] = new int[imgResultante.n];
        for (int j = 0; j < imgResultante.n; j++){
            int valor = img1.pixels[i][j] + img2.pixels[i][j];
            limitaPixel(valor);
            imgResultante.pixels[i][j] = valor;
        }
    }
}

void subtrai(Imagem& img1, Imagem& img2, Imagem& imgResultante){
    if (img1.n != img2.n){
        std::cerr << "Erro: Dimensões diferentes!" << std::endl;
        return;
    }

    imgResultante.n = img1.n;
    imgResultante.pixels = new int*[imgResultante.n];
    for (int i = 0; i < imgResultante.n; i++){
        imgResultante.pixels[i] = new int[imgResultante.n];
        for (int j = 0; j < imgResultante.n; j++){
            int valor = img1.pixels[i][j] - img2.pixels[i][j];
            limitaPixel(valor);
            imgResultante.pixels[i][j] = valor;
        }
    }
}

void inverteImagem(Imagem& img){
    for (int i = 0; i < img.n; i++){
        for (int j = 0; j < img.n; j++){
            img.pixels[i][j] = 255 - img.pixels[i][j];
        }
    }
}

bool compara(Imagem& img1, Imagem& img2){
    if (img1.n != img2.n) return false;

    for (int i = 0; i < img1.n; i++){
        for (int j = 0; j < img1.n; j++){
            if (img1.pixels[i][j] != img2.pixels[i][j]){
                return false;
            }
        }
    }
    return true;
}

void criaImagemPreta(int dim, Imagem& img){
    img.n = dim;
    img.pixels = new int*[img.n];
    for (int i = 0; i < img.n; i++){
        img.pixels[i] = new int[img.n];
        for (int j = 0; j < img.n; j++){
            img.pixels[i][j] = 0;
        }
    }
}

void adicionaBorda(Imagem& img){bool possuiBordaBranca = true;

    //Verificar se a imagem já possui uma borda branca
    for (int i = 0; i < img.n; i++){
        if (img.pixels[0][i] != 255 || img.pixels[img.n - 1][i] != 255 || img.pixels[i][0] != 255 || img.pixels[i][img.n - 1] != 255){
            possuiBordaBranca = false;
            break;
        }
    }

    int novaDimensao = possuiBordaBranca ? img.n + 2 : img.n + 4;

    //Aloca nova matriz para a imagem com a borda adicionada
    int **novaImagem = new int*[novaDimensao];
    for (int i = 0; i < novaDimensao; i++){
        novaImagem[i] = new int[novaDimensao]();
    }

    if (possuiBordaBranca){
        //Adiciona apenas uma camada preta ao redor
        for (int i = 1; i < novaDimensao - 1; i++){
            for (int j = 1; j < novaDimensao - 1; j++){
                novaImagem[i][j] = img.pixels[i - 1][j - 1];
            }
        }
    } else{
        //Adiciona camada preta externa e camada branca interna
        for (int i = 2; i < novaDimensao - 2; i++){
            for (int j = 2; j < novaDimensao - 2; j++){
                novaImagem[i][j] = img.pixels[i - 2][j - 2];
            }
        }
        
        //Configurar borda branca (camada interna)
        for (int i = 1; i < novaDimensao - 1; i++){
            novaImagem[1][i] = 255;
            novaImagem[novaDimensao - 2][i] = 255;
            novaImagem[i][1] = 255;
            novaImagem[i][novaDimensao - 2] = 255;
        }
    }

    //Libera a imagem antiga e atualiza o ponteiro e dimensão
    for (int i = 0; i < img.n; i++){
        delete[] img.pixels[i];
    }
    delete[] img.pixels;

    img.pixels = novaImagem;
    img.n = novaDimensao;

}
