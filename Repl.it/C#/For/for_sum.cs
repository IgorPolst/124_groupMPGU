using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите до какого числа ссумировать: ");
        int n, S;
        S = 0;
        n = Convert.ToInt32(Console.ReadLine());
        for (int i = 1; i <= n; i++)
            S += i;
        Console.WriteLine("{0}", S);
    }
}

