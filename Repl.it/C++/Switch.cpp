#include <iostream>
using namespace std;
int main()
{
    cout << "Введите два числа: ";
    float a, b, c;
    cin >> a >> b;
    cout << "Введите алгебраический знак: ";
    char operand;
    cin >> operand;
    if (operand == '+' || operand == '-' || operand == '*' || operand == '/')
        switch (operand)
        {
        case '+':
            c = a + b;
            cout << a << "+" << b << "=" << c;
            break;
        case '-':
            c = a - b;
            cout << a << "-" << b << "=" << c;
            break;
        case '*':
            c = a * b;
            cout << a << "*" << b << "=" << c;
            break;
        case '/':
            if (b == 0)
                cout << "Деление не возможно";
            else
            {
                c = a / b;
                cout << a << "/" << b << "=" << c;
            }
            break;
        }
    else
        cout << "Не шали!!";
}