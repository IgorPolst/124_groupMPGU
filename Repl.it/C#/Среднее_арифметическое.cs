using System;

class MainClass
{
  public static void Main(string[] args)
  {
    int a, b;
    double c;

    Console.WriteLine("Введиите a, b \n");
    a = Convert.ToInt32(Console.ReadLine());
    b = Convert.ToInt32(Console.ReadLine());
    c = (a + b) / 2.0;
    Console.WriteLine("Среднее арифметическое  = {0}", c);
    c = Math.Sqrt(a * b);
    Console.WriteLine("Среднее геометрическое  = {0}", c);

  }
}