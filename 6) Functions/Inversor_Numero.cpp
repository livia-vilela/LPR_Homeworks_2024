/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>



using namespace std;

string reverseNumber (int number_in);

int main()
{
    cout << "Digite aqui um número inteiro: ";
    int number_in;
    cin >> number_in;
    string number_out = reverseNumber(number_in);
    cout << "O inverso do número " << number_in << " é " << number_out;
}

string reverseNumber (int number_in)
{
    string number_string = to_string(number_in);
    reverse(number_string.begin(), number_string.end());

    return number_string;

}