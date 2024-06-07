#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device numAleatorio;
    uniform_int_distribution<> distribuicao(1, 100);
    int numero_gerado = distribuicao(numAleatorio);
    int guess;
    do 
    {
        cout << "Tente adivinhar o numero (de 1 a 100): ";
        cin >> guess;
    } while (guess != numero_gerado);

    cout << endl<< "   Parabens, voce acertou! ";
}

