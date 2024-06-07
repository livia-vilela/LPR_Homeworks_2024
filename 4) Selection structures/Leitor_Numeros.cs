using System;

class Leitor_Numeros
{
    static void Main(string[] args)
    {
        Console.Write(">> Digite um número inteiro: ");
        int numero = int.Parse(Console.ReadLine());
        if (numero % 2 != 0)
        {
            Console.WriteLine("\n > O número {0} é ÍMPAR.", numero);
        }
        else
        {
            Console.WriteLine("\n > O número {0} é PAR.", numero);
        }
    }
}
