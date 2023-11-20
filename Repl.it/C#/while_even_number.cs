using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число");
        int m = 0, n;
        n = Convert.ToInt32(Console.ReadLine());
        while (m <= n)
        {
            m += 2;
            Console.WriteLine("{0}", m);
        }
        Console.WriteLine("\nЭто все чётные числа до вашего числа");
    }
}
