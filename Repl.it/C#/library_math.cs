using System;

class MainClass
{
    public static void Main(string[] args)
    {
        double a, c;
        a = Convert.ToDouble(Console.ReadLine());
        c = (Math.Sqrt(3) * a * a) / 4;
        Console.WriteLine("c= {0}", c);
    }
}