#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10];
    int n = 0, min, max = -1;
    for (int i = 0; i < 10; i++)
        cin >> mass[i];
    min = mass[0];

    for (int i = 0; i < 10; i++)
    {
        if (mass[i] > max)
            max = mass[i];
        if (mass[i] < min)
            min = mass[i];
    }
    cout << "Наибольшее число = " << max;
    cout << "Наименьшее число = " << min;
}