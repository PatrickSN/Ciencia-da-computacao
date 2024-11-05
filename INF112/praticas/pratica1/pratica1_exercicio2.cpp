#include <iostream>


void lieaInteiros1(int &a, int &b){
    std::cin >> a >> b;
}
void lieaInteiros2(int *c, int *d){
    std::cin >> *c >> *d;
}
int main(){
    int a, b;
    lieaInteiros1(a,b);
    std::cout << "Valores lidos (passagem por referencia): " << a << " e " << b << std::endl;

    lieaInteiros2(&a,&b);
    std::cout << "Valores lidos (passagem por ponteiros): " << a << " e " << b << std::endl;

    return 0;
}