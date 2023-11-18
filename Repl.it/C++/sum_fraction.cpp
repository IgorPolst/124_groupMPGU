#include <iostream>
using namespace std;
int main()
{
    cout << "Введите до какого числа считать: ";
    int a;
    float S = 0, i;
    cin >> a;
    for (i = 1; S < a; i++)
    {
        S = S + float(1 / i);
    }
    cout << i;
}