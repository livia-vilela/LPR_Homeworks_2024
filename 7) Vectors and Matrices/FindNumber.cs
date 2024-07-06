using System;
using System.Globalization;
using System.Runtime.InteropServices;

class FindNumber
{
    static void Main(string[] args)
    {
        int[] numbers = new int[10];
        int searchnumber;
        int found = 0;

        Console.WriteLine("Insira 10 números inteiros:\n");

        for(int i = 0; i < numbers.Length; i++)
            numbers[i] = int.Parse(Console.ReadLine());

        Console.WriteLine("Insira o número que gostaria de pesquisar: ");
        searchnumber = int.Parse(Console.ReadLine());

        foreach (int num in numbers)
        {
            if (num == searchnumber)
            {
                Console.WriteLine(" O número está na posição " + Array.IndexOf(numbers, num));
                found++;
            }
        }
        if (found != 0)
            Console.WriteLine("O número foi encontrado " + found + " vezes");
        else
            Console.WriteLine("Número não encontrado");
    }
}
