using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n;
        int[] mass = new int[10];
        for (int i = 0; i < 10; i++)
        {
            mass[i] = rnd.Next();
            if (mass[i] % 2 == 0)
                mass[i] *= -1;
            Console.WriteLine("{0}", mass[i]);
        }
        Console.WriteLine("Новый массив");
        for (int i = 0; i < 5; i++)
        {
            n = mass[i];
            mass[i] = mass[9 - i];
            mass[9 - i] = n;
        }
        for (int i = 0; i < 10; i++)
            Console.WriteLine("{0}", mass[i]);
    }
}