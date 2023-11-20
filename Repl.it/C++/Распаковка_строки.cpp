#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << ("Введите строку необходимую распаковать");
    string s;
    int n = 0;
    cin >> s;
    while (sizeof(s) != 0)
    {
        n = (int)(s[0] - '0');
        for (int j = 0; j < n; j++)
            cout << (s[1]);
        s.erase(0, 2);
    }
}
