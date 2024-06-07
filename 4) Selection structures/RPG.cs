using System;

class RPG
{
    static void Main(string[] args)
    {
        Console.WriteLine(" >> Escolha a classe do seu personagem: \n > 1. Guerreira\n > 2. Mago\n > 3. Arqueira \n");
        int classe = int.Parse(Console.ReadLine());

        switch (classe)
        {
            case 1:
                Console.WriteLine("\nVocê escolheu a classe Guerreira.\n>> Habilidades: \n> Ataque pesado \n> Defesa total");
            break;
            case 2:
                Console.WriteLine("\nVocê escolheu a classe Mago.\n>> Habilidades: \n> Bola de fogo \n> Escudo de gelo");
            break;
            case 3:
                Console.WriteLine("\nVocê escolheu a classe Arqueira.\n>> Habilidades: \n> Flecha precisa \n> Disparo triplo");
            break;
            default:
                Console.WriteLine("\nEssa opção ainda não está disponível. Tente denovo.");
            break;
        }
    }
}