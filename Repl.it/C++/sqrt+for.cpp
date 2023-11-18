#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Введите кол-во итераций: ";
    int n, i;
    float S;
    cin >> n;
    for (i = 0; i < n; i++)
        S = sqrt(2 + S);
    cout << S;
}