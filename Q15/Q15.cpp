#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float PI, graus, radianos;

    PI = 3.141592; 
    cout << "Digite o valor em graus: ";
    cin >> graus;

    radianos = graus * PI / 180;

    cout << "O valor em radianos é: " << radianos << endl;
    return 0;
};