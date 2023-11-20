#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10], num;
    int mass2[9];

    for (int i = 0; i < 10; i++)
        cin >> mass[i];

    cout << "\nВведите номер элемента, который хотите удалить\n";

    cin >> num;
    cout << "Новый массив \n";
    for (int i = 0; i < 9; i++)
    {
        if (mass[i] != -1)
            mass2[i] = mass[i];
        else
        {
            mass2[i] = mass[i + 1];
            mass[i + 1] = -1;
        }
    }

    for (int i = 0; i < 9; i++)
        cout << mass2[i] << "\n";
}