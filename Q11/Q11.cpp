#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float custoFabrica, distribuidor, impostos, custoFinal;
    cout<< "Digite o custo de fabrica do carro!\n";
    cin >> custoFabrica;

    distribuidor = custoFabrica * 0.28;
    impostos = custoFabrica * 0.45;
    custoFinal = custoFabrica + distribuidor + impostos;

    cout << "O custo final do carro é: " << custoFinal << endl;

    return 0;
};