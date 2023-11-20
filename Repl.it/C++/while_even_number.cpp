#include <iostream>
using namespace std;
int main()
{
    cout << "Введите число: ";
    int m = 0, n;
    cin >> n;
    while (m <= n)
    {
        m += 2;
        cout << m << " ";
    }
    cout << "\nЭто все чётные числа до вашего числа";
}