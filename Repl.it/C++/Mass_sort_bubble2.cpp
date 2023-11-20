#include <iostream>
using namespace std;

int main() {
  cout << "Заполните массив \n";
  int mass [10],bufer;
  for (int i = 0; i < 10; i++)
    cin >> mass[i];

  for (int j = 9; j > 0; j-=1)
    for (int i = 0; i < j; i++)
      if (mass[i] > mass[i+1]){
        bufer = mass[i];
        mass[i] = mass[i+1];
        mass[i+1] = bufer;}
    cout << "Новый массив\n";

   for (int i = 0; i < 10; i++)
     cout << mass[i] << "\n";
}