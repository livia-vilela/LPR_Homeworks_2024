#include <iostream>
#include <iostream>
using namespace std;

int main()
{  
    int num_funcionario, horas;
    double salario_hora;
    cout << "Entre com o número do funcionário: ";
    cin >> num_funcionario;
    cout << "Entre com o total de horas trabalhadas: ";
    cin >> horas;
    cout << "Entre com o salário por hora: ";
    cin >> salario_hora;
    cout << "NUMBER: " << num_funcionario << endl;
    cout << "SALARY: " << salario_hora * horas << endl;


}