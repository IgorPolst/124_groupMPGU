using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        double[] mass = new double[10];
        for (int i = 0; i < 10; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }
    }
}