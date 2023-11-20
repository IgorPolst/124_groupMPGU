#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10], n, k = 0;
    int mass2[9];

    for (int i = 0; i < 10; i++)
    {
        cin >> mass[i];
        if (mass[i] < n)
            k++;
    }

    for (int i = 0; i < 9; i++)
        cout << "Ввашем масиве " << k << "вашего числа";
}
