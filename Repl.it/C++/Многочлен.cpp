#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Введите a, b и с \n";
    int a, b, c;
    float D;
    cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D < 0)
        cout << "Нет корней";
    else if (D == 0)
    {
        int x = -(b / 2 * a);
        cout << "Один корень x = " << x;
    }
    else
    {
        int x1 = (-b + sqrt(D)) / (2 * a);
        int x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Два корня \n x1 = " << x1 << " \n x2 = " << x2;
    }
}