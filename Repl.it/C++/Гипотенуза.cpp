#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Введите длины гипотенуз \n";
    int a, b;
    cin >> a >> b;

    if (a <= 0 || b <= 0)
        cout << "Такого теруголььника не существует";
    else
        cout << "Шипотенуза треугольника = " << sqrt(pow(a, 2) + pow(b, 2));
}
