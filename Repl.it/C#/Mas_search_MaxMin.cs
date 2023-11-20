using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n = 0, min, max = -1;
        int[] mass = new int[10];
        for (int i = 0; i < 10; i++)
        {
            mass[i] = rnd.Next();
            if (mass[i] % 2 == 0)
                mass[i] *= -1;
            Console.WriteLine("{0}", mass[i]);
        }
        min = mass[0];
        for (int i = 0; i < 10; i++)
        {
            if (mass[i] > max)
                max = mass[i];
            if (mass[i] < min)
                min = mass[i];
        }
        Console.WriteLine("Наибольшее число {0}", max);
        Console.WriteLine("Наименьшее число {0}", min);
    }
}