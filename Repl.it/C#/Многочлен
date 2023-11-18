using System;
class MainClass
{
    public static void Main(string[] args)
    {
        int a, b, c;
        double x, x1, x2, D;
        Console.WriteLine("Введиите a, b, c \n");
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        c = Convert.ToInt32(Console.ReadLine());
        D = Math.Pow(b, 2) - 4 * a * c;
        if (D < 0)
            Console.WriteLine("Нет корней");
        else if (D == 0)
        {
            x = -(b / 2 * a);
            Console.WriteLine("Один корень \n x = ", x);
        }
        else
        {
            x1 = (-b + Math.Sqrt(D)) / (2 * a);
            x2 = (-b - Math.Sqrt(D)) / (2 * a);
            Console.WriteLine("Два корня \n x1 = {0} ", x1);
            Console.WriteLine(" \n x2 = {0}", x2);
        }
    }