using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите длину катетов ");
        int a, b;
        double c;
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        if (a <= 0 || b <= 0)
            Console.WriteLine("Такого треугольника не существует");
        else
        {
            c = Math.Sqrt(a * a + b * b);
            Console.WriteLine("Длинна гипотенузы = {0}", c);
        }
    }
}