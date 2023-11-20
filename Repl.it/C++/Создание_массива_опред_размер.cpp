#include <iostream>
using namespace std;

int main()
{
    cout << "Заплните массив \n";
    int mass[10];
    for (int i = 0; i < 10; i++)
        cin >> mass[i];
    for (int i = 0; i < 10; i++)
        cout << mass[i] << "\n";
}
