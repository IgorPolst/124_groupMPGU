using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число: ");
        int n;
        n = Convert.ToInt32(Console.ReadLine());
        while (n > 0)
        {
            Console.WriteLine("{0}", n % 10, "\n");
            n /= 10;
        }
    }
}

