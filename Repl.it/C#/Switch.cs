using System;
class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите два числа: ");
        float a, b, c;
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        char operand;
        Console.WriteLine("Введите знак: ");
        operand = Convert.ToChar(Console.ReadLine());
        switch (operand)
        {
            case '+':
                c = a + b;
                Console.WriteLine($"{a} + {b} = {a + b}");
                break;
            case '-':
                c = a - b;
                Console.WriteLine($"{a} - {b} = {a - b}");
                break;
            case '*':
                c = a * b;
                Console.WriteLine($"{a} * {b} = {a * b}");
                break;
            case '/':
                if (b == 0)
                    Console.WriteLine("Деление невозможно.");
                else
                {
                    c = a / b;
                    Console.WriteLine($"{a} / {b} = {a / b}");
                }
                break;
        }
    }
}