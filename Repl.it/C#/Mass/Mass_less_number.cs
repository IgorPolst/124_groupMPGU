using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        Console.WriteLine("Введите число");
        int n, k = 0;
        n = Convert.ToInt32(Console.ReadLine());
        int[] mass = new int[10];
        for (int i = 0; i < 10; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
            if (mass[i] < n)
                k++;
        }
        Console.WriteLine("Меньше вашего числа {0} чисел этого массива", k);
    }
}
