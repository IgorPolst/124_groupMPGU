using System;
class MainClass
{
    public static void Main(string[] args)
    {
        int R;
        double V;
        Console.WriteLine("Введиите радиус шара = ");
        R = Convert.ToInt32(Console.ReadLine());
        if (R <= 0)
            Console.WriteLine("Такого шара не существует");
        else
        {
            V = 3.1415926535 * Math.Pow(R, 3) * 4 / 3;
            Console.WriteLine("Объём шара = {0}", V);
        }
    }
}