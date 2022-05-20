#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n1, n2, n3, mediaPonderada;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    mediaPonderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    cout << "A média ponderada é: " << mediaPonderada << endl;
    return 0;
};