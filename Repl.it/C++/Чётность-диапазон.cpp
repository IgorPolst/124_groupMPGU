#include <iostream>
using namespace std;

int main()
{
    cout << "Введите число: ";
    int t;
    cin >> t;
    if (t > 0 && t < 10)
        switch (t)
        {
        case 2:
        case 4:
        case 6:
        case 8:
            cout << "Чётное до 10";
            break;
        case 1:
        case 3:
        case 5:
        case 9:
            cout << "Не чётное до 10";
            break;
        }
    else
        cout << "Число не принадлежит заданному диапозону";
}