using System;

class MainClass
{
    public static void Main(string[] args)
    {
        double a, b, c;
        a = Convert.ToDouble(Console.ReadLine());
        b = Convert.ToDouble(Console.ReadLine());
        c = Math.Sqrt(a * a + b * b);
        Console.WriteLine("c= {0}", c);
    }
}