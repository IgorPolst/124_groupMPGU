#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10], num, sum;
    for (int i = 0; i < 10; i++)
        cin >> mass[i];

    cout << "\nВведите номер элемента и его значение, которое хотите заменить";

    cin >> num >> sum;
    cout << "Новый массив";

    mass[num - 1] = sum;
    for (int i = 0; i < 10; i++)
        cout << mass[i];

    for (int i = 0; i < 10; i++)
        cin >> mass[i];
}
