#include <iostream>
using namespace std;
int main()
{
    cout << "Заплните массив \n";
    int mass[10], bufer, bufer2;
    bufer = 0;
    for (int i = 0; i < 10; i++)
        cin >> mass[i];

    for (int i = 0; i < 9; i++)
    {
        bufer = mass[i];
        bufer2 = i;
        for (int j = i + 1; j < 9; j++)
            if (mass[j] < bufer)
            {
                bufer = mass[j];
                bufer2 = j;
            }
        mass[bufer2] = mass[i];
        mass[i] = bufer;
    }
    cout << "Новый массив\n";
    for (int i = 0; i < 10; i++)
        cout << mass[i] << "\n";
}
