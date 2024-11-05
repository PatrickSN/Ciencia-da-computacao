#include <iostream>


struct Imagem {
    int ** pixels; // matriz com os pixels da imagem
    int nrows; // numero de linhas na imagem (altura)
    int ncolumns; // numero de colunas na imagem (largura)
};

void leImagem(Imagem &img) {
    // Insira seu codigo aqui ....
    std::string tipo;
    std::cin >> tipo;  //Lê o codigo 'magico'
    std::cin >> img.ncolumns >> img.nrows;  //Lê as dimensões da imagem

    img.pixels = new int*[img.nrows];
    for (int i = 0; i < img.nrows; i++) {
        img.pixels[i] = new int[img.ncolumns];
    }

    for (int i = 0; i < img.nrows; i++) {
        for (int j = 0; j < img.ncolumns; j++) {
            std::cin >> img.pixels[i][j];
        }
    }
}


void deletaImagem(Imagem &img) {
    // Insira seu codigo aqui ....
    for (int i = 0; i < img.nrows; i++) {
        delete[] img.pixels[i];
    }
    delete[] img.pixels;
}

void imprimeImagem(const Imagem &img) {
    // Insira seu codigo aqui ....
    std::cout << "P1\n";  // Código mágico para PBM
    std::cout << img.ncolumns << " " << img.nrows << "\n";  

    for (int i = 0; i < img.nrows; i++) {
        for (int j = 0; j < img.ncolumns; j++) {
            std::cout << img.pixels[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void inverteCorImagem(Imagem &img) {
    // Insira seu codigo aqui ....
    for (int i = 0; i < img.nrows; i++) {
        for (int j = 0; j < img.ncolumns; j++) {
            img.pixels[i][j] = (img.pixels[i][j] == 0) ? 1 : 0;
        }
    }
}

int main() {
    Imagem img;

    leImagem(img);
    inverteCorImagem(img);
    imprimeImagem(img);
    deletaImagem(img);

    return 0;
}
