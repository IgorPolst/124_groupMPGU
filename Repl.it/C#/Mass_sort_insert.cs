using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n, x = 0;
        Console.WriteLine("Введите размер массива");
        n = Convert.ToInt32(Console.ReadLine());
        int[] mass = new int[n];
        Console.WriteLine("\nМассив");
        for (int i = 0; i < n; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }
        int bufer = 0, bufer2;


        for (int i = 1; i < n; i++)
        {
            bufer = mass[i];
            bufer2 = i;
            while ((bufer < mass[bufer2 - 1]) && (bufer2 > 1))
            {
                mass[bufer2 - 1] = x;
                mass[bufer2 - 1] = mass[bufer2];
                mass[bufer2] = x;
                bufer2--;
            }
            mass[bufer2] = bufer;
        }

        Console.WriteLine("\nНовый массив");
        for (int i = 0; i < n; i++)
            Console.WriteLine("{0}", mass[i]);

    }
}