#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10], n;
    for (int i = 0; i < 10; i++)
        cin >> mass[i];

    for (int i = 0; i < 5; i++)
    {
        n = mass[i];
        mass[i] = mass[9 - i];
        mass[9 - i] = n;
    }

    for (int i = 0; i < 10; i++)
        cin >> mass[i];
}
