using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int n, num, sum;
        Console.WriteLine("Введите размер массива");
        n = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("\nМассив");
        int[] mass = new int[10];
        for (int i = 0; i < n; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }
        Console.WriteLine("\nВведите номер элемента, который хотите удалить");
        num = Convert.ToInt32(Console.ReadLine());
        mass[num - 1] = -1;
        Console.WriteLine("\nНовый массив");
        int[] mass2 = new int[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (mass[i] != -1)
                mass2[i] = mass[i];
            else
            {
                mass2[i] = mass[i + 1];
                mass[i + 1] = -1;
            }
            Console.WriteLine("{0}", mass2[i]);
        }
    }
}