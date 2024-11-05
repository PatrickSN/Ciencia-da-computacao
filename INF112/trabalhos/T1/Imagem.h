#ifndef IMAGEM_H
#define IMAGEM_H

#include <iostream>

struct Imagem{
    int n;                      //Dimensão da imagem (n x n)
    int** pixels;               //Matriz de pixels

    Imagem();                   //Construtor padrão
    ~Imagem();                  //Destrutor para liberar memória
};

void limitaPixel(int& valor);   //Função para limitar o valor entre 0 e 255
void leImagem(Imagem& img);     //Lê a imagem
void imprimeImagem(Imagem& img);    //Imprime a imagem
void soma(Imagem& img1, Imagem& img2, Imagem& imgResultante);   //Soma duas imagens
void subtrai(Imagem& img1, Imagem& img2, Imagem& imgResultante);    //Subtrai duas imagens
void inverteImagem(Imagem& img);    //Inverte os pixels da imagem
bool compara(Imagem& img1, Imagem& img2);   //Compara duas imagens
void criaImagemPreta(int dim, Imagem& img); //Cria uma imagem preta de dimensão n
void adicionaBorda(Imagem& img);    //Adiciona borda a imagem

#endif
