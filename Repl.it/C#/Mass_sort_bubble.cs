using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n;
        Console.WriteLine("Введите размер массива");
        n = Convert.ToInt32(Console.ReadLine());
        int[] mass = new int[n];
        int bufer = 0;

        Console.WriteLine("\nМассив");
        for (int i = 0; i < n; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }
        for (int j = n - 1; j > 0; j -= 1)
            for (int i = 0; i < j; i++)
                if (mass[i] > mass[i + 1])
                {
                    bufer = mass[i];
                    mass[i] = mass[i + 1];
                    mass[i + 1] = bufer;
                }
        Console.WriteLine("\nНовый массив");
        for (int i = 0; i < n; i++)
            Console.WriteLine("{0}", mass[i]);
    }
}