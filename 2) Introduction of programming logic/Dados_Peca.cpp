#include <iostream>
#include <iomanip>
 
using namespace std;

int main()
{
    system("chcp 1252 > nul");
    int codigo1, codigo2,pecas1, pecas2;
    double valor1, valor2;
    cout << "Digite, com enter entre as informa��es, o c�digo da primeira pe�a, o n�mero de pe�as e o valor unit�rio delas: ";
    cin >> codigo1;
    cin >> pecas1;
    cin >> valor1;
    cout << "Digite, com enter entre as informa��es, o c�digo da primeira pe�a, o n�mero de pe�as e o valor unit�rio delas: ";
    cin >> codigo2;
    cin >> pecas2;
    cin >> valor2;
    cout << "VALOR A PAGAR: R$" << fixed << setprecision(2) << pecas1 * valor1 + pecas2 * valor2 << endl;
}