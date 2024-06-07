#include <iostream>

using namespace std;

int main()
{
    
    int quantidade_num, num;
    int num_validos = 0;
    int contador = 0;
    double acumulador = 0;
    double media;

    cout << "Digite a quantidade de numeros de deseja inserir: ";
    cin >> quantidade_num;

    while (contador != quantidade_num) 
    {
        cout << "Digite um numero: ";
        cin >> num;

        if (num % 2 == 0)
        {
            acumulador += num;
            num_validos++;
            
        }
        contador++;
    }
    media = acumulador / num_validos;

    cout << "A media dos numeros digitados e: " << media;
}

