using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите до какого числа перемножать: ");
        int n, S;
        S = 1;
        n = Convert.ToInt32(Console.ReadLine());
        for (int i = 1; i <= n; i++)
            S *= i;
        Console.WriteLine("{0}", S);
    }
}