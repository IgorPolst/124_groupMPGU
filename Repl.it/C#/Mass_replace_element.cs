using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int num, sum;

        int[] mass = new int[10];
        for (int i = 0; i < 10; i++)
        {
            mass[i] = rnd.Next();
            Console.WriteLine("{0}", mass[i]);
        }
        Console.WriteLine("\nВведите номер элемента и его значение, которое хотите заменить");
        num = Convert.ToInt32(Console.ReadLine());
        sum = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("\nНовый массив");
        mass[num - 1] = sum;
        for (int i = 0; i < 10; i++)
            Console.WriteLine("{0}", mass[i]);
    }
}