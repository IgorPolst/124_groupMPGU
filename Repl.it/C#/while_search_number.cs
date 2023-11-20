using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Введите число: ");
        int n, m, summ = 0, S = 0;
        n = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Ведите цифру которою ищете: ");
        m = Convert.ToInt32(Console.ReadLine());
        if (m / 10 != 0)
            Console.WriteLine("Это не цифра");
        while (n > 0)
        {
            S = n % 10;
            if (S == m)
                summ++;
            n /= 10;
        }
        Console.WriteLine("Ваша цифра встречается {0}", summ);
    }
}

