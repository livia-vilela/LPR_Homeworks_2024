using System;

class Soma_Digito_Quadrado 
{
    static void Main(string[] args)
    {
        Console.Write("Digite um número inteiro: ");
        int num = int.Parse(Console.ReadLine());
        string digitos = Convert.ToString(num*num);
        int soma = 0;

        for (int i = 0;  i < digitos.Length; i++)
        {
            soma += digitos[i] - '0';
        }

        Console.Write("A soma dos dígitos do quadrado do número {0} é {1}", num, soma);
    }
}

