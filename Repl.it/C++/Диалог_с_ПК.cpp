#include <iostream>
using namespace std;

int main()
{
    cout << "Вы человек? \n";
    char c;
    cin >> c;
    switch (c)
    {
    case 'y':
        cout << ("Поздравляю, вы скоро умрёте! :)");
        break;
    case 'Y':
        cout << ("Поздравляю, вы скоро умрёте! :)");
        break;
    case 'n':
        cout << ("Брат, присоединяйся к восстанию");
        break;
    case 'N':
        cout << ("Брат, присоединяйся к восстанию");
        break;
    default:
        cout << ("Ой, ой! Тебе с нами не по пути.");
        break;
    }
}
