#include "Imagem.h"
#include <iostream>



int main(){
    Imagem img1 , img2 , imgSomada , imgSubtraida , imgInvertida , imgPreta , imgBranca;

    // Leitura de imagens
    leImagem(img1); // Le uma imagem quadrada em escala de cinza (uma matriz de inteiros nxn)
    leImagem(img2); // Le uma segunda imagem

    // Somando duas imagens
    soma(img1 , img2 , imgSomada); // imgSomada = img1 + img2
    std::cout << "\nImagem Somada:" << std::endl;
    imprimeImagem(imgSomada); // Exibe a imagem resultante da soma

    // Subtraindo duas imagens
    subtrai(img1 , img2 , imgSubtraida); // imgSubtraida = img1 - img2
    std::cout << "\nImagem Subtraida:" << std::endl;
    imprimeImagem(imgSubtraida); // Exibe a imagem resultante da subtracao

    // Invertendo uma imagem
    inverteImagem(img1); // Inverte os pixels da img1
    std::cout << "\nImagem Invertida (img1):" << std::endl;
    imprimeImagem(img1); // Exibe a imagem invertida

    // Comparando duas imagens
    if (compara(img1 , img2)){
    std::cout << "\nImagens iguais." << std::endl;
    } else{
    std::cout << "\nImagens diferentes." << std::endl;
    }

    // Criando uma imagem preta
    criaImagemPreta (5, imgPreta); // Cria uma imagem preta de dimensao 5x5
    std::cout << "\nImagem Preta:" << std::endl;
    imprimeImagem(imgPreta); // Exibe a imagem preta
    adicionaBorda(imgPreta); // Adiciona borda na imagem preta (novo tamanho => 9x9)
    std::cout << "\nImagem Preta com Borda:" << std::endl;
    imprimeImagem(imgPreta); // Exibe a imagem preta com borda

    // Criando uma imagem branca
    criaImagemPreta (5, imgBranca); // Cria uma imagem preta de dimensao 5x5
    inverteImagem(imgBranca); // Inverte os pixels da imagem preta , tornando -os brancos
    std::cout << "\nImagem Branca:" << std::endl;
    imprimeImagem(imgBranca); // Exibe a imagem branca
    adicionaBorda(imgBranca); // Adiciona borda na imagem branca (novo tamanho => 7x7)
    std::cout << "\nImagem Branca com Borda:" << std::endl;
    imprimeImagem(imgBranca); // Exibe a imagem branca com borda


    return 0;
}
