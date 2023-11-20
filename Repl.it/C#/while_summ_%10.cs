using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число: ");
        int n, S = 0;
        n = Convert.ToInt32(Console.ReadLine());
        while (n > 0)
        {
            S += n % 10;
            n /= 10;
        }
        Console.WriteLine("{0}", S);
    }
}
