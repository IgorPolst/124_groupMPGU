#include <iostream>
using namespace std;
int main()
{
    cout << "Заплните массив \n";
    int mass[10], bufer, bufer2, x = 0;
    bufer = 0;
    for (int i = 0; i < 10; i++)
        cin >> mass[i];

    for (int i = 1; i < 10; i++)
    {
        bufer = mass[i];
        bufer2 = i;
        while ((bufer < mass[bufer2 - 1]) && (bufer2 > 1))
        {
            mass[bufer2 - 1] = x;
            mass[bufer2 - 1] = mass[bufer2];
            mass[bufer2] = x;
            bufer2--;
        }
        mass[bufer2] = bufer;
    }
    cout << "Новый массив\n";
    for (int i = 0; i < 10; i++)
        cout << mass[i] << "\n";
}
