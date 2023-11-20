using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число, до которого нужно искать совершенные числа: ");
        int n, S;
        n = Convert.ToInt32(Console.ReadLine());
        for (int i = 1; i <= n; i++)
        {
            S = 0;
            for (int j = 1; j < i; j++)
                if (i % j == 0)
                    S += j;
            if (S == i)
                Console.WriteLine("{0}", i, "\n");
        }
    }
}

