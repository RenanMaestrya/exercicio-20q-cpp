/*
Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular,
utilizando a fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float v, c, l, a;
	
	cout << "Digite o comprimento da caixa retangular!\n";
	cin >> c;
	
	cout << "Digite a largura da caixa retangular!\n";
	cin >> l;
	
	cout << "Digite a altura da caixa retangular!\n";
	cin >> a;
	
	
	v = c * l * a;
	
	cout << "O volume da caixa retangular é igual a: " << v << "m³\n";
	return 0;
}
