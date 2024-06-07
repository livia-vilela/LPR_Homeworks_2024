using System;
class Raio_Circulo

{
    static void Main(string[] args)
    {
        double raio, area;
        Console.WriteLine("Entre aqui com o valor do raio: ");
        raio = Convert.ToDouble(Console.ReadLine());
        area = Math.Round(3.14159 * (raio * raio), 4);
        Console.WriteLine("A área do círculo é: " +  area);
    }
}
