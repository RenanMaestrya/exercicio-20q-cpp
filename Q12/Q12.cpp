#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numeroCarros;
    float valorVendas, salario, valorPorCarro, salarioFinal;

    cout << "Digite o numero de carros vendidos: ";
    cin >> numeroCarros;
    cout << "Digite o valor total das vendas: ";
    cin >> valorVendas;
    cout << "Digite o salario do vendedor: ";
    cin >> salario;
    cout << "Digite a comissão por cada carro vendido: ";
    cin >> valorPorCarro;

    valorVendas = valorVendas * 0.05;

    salarioFinal = salario + valorVendas + (numeroCarros * valorPorCarro);


    cout << "O salario final do vendedor é: " << salarioFinal << endl;
    return 0;  
};