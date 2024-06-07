#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252 > nul");
    int num1, num2;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    if (num1 > num2) 
    {
        if (num1 % num2 == 0)
        {
            cout << "O número "<< num1 <<" é múltiplo de " << num2;
        }
        else 
        {
            cout << "O número " << num1 << " não é múltiplo de " << num2;
        }
    }
    else 
    {
        if (num2 % num1 == 0)
        {
            cout << "O número " << num2 << " é múltiplo de " << num1;
        }
        else
        {
            cout << "O número " << num2 << " não é múltiplo de " << num1;
        }
    }
}


