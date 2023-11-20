using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число, делители которого необходимо найти: ");
        int n, S;
        n = Convert.ToInt32(Console.ReadLine());
        S = 1;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                S = i;
                Console.WriteLine("{0}", S, "\n");
            }
        }
    }
}

