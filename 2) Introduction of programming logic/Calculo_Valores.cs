using System;

class Calculo_Valores
{
    static void Main(string[] args)
    {
        Console.Write("Digite os valores inteiros para A, B, C e D respectivamente: ");
        string[] v = Console.ReadLine().Split(" ");
        int a = int.Parse(v[0]);
        int b = int.Parse(v[1]);
        int c = int.Parse(v[2]);
        int d = int.Parse(v[3]);
        int result = a * b - c * d;
        Console.WriteLine($"Diferença = {result}");
    }
}