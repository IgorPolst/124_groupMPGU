#include <iostream>
using namespace std;
int main()
{
    cout << "Введите число, делители которого необходимо найти: ";
    int n, S;
    cin >> n;
    S = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            S = i;
            cout << S << endl;
        }
    }
}