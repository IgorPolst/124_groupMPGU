using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n;
        Console.WriteLine("Введите размер массива");
        n = Convert.ToInt32(Console.ReadLine());
        int bufer = 0, bufer2 = 0;
        Console.WriteLine("\nМассив");
        int[] mass = new int[n];
        for (int i = 0; i < n; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            bufer = mass[i];
            bufer2 = i;
            for (int j = i + 1; j < n; j++)
                if (mass[j] < bufer)
                {
                    bufer = mass[j];
                    bufer2 = j;
                }
            mass[bufer2] = mass[i];
            mass[i] = bufer;
        }
        Console.WriteLine("\nНовый массив");
        for (int i = 0; i < n; i++)
            Console.WriteLine("{0}", mass[i]);
    }
}