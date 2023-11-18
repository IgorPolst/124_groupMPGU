#include <iostream>
using namespace std;


int main()
{

    cout << "Введите до какого числа перемнодать: ";
    int n, S;
    cin >> n;
    S = 1;
    for (int i = 1; i <= n; i++)
        S *= i;
    cout << S;
}