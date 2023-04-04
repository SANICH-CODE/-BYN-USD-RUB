
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

void usd (){
int byn;
cout << "Удакладніце колькасць BYN для перакладу ў USD" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);
cout << getenv("*");
cout << "Конвертация в USD временно отключена." << endl;
//cout << "За " << byn << " BYN Вы атрымаеце " << byn / 2.8627 << " USD" << endl << "Курс заснаваны 04.04.2023" << endl; 
char* mySecret = getenv("dollar");
cout << getenv("**");
}

void rub (){
int byn;
char* mySecret = getenv("rub");
cout << "Удакладніце колькасць BYN для перакладу ў RUB" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен" << endl;
  }
sleep (2);
cout << getenv("*");
cout << "Конвертация в RUB временно отключена." << endl;
//cout << "За " << byn << " BYN Вы атрымаеце " << byn / 0.036896 << " RUB" << endl << "Курс заснаваны 04.04.2023" << endl; 
cout << getenv("**");
}

int main() {
  int byn;
  char val1;
  cout << "Здравствуйте, выберіце валюту (usd=u/rub=r)\n";
  cout << "Валюта: ";
  cin >> val1;

    if (val1 == 'u')
      {
        usd();
      }
    if (val1 == 'r')
      {
        rub();
      }
}
//  //