#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string>

using namespace std;

void stop() {
  
}

void usd (){
double byn;
cout << "Удакладніце колькасць BYN для перакладу ў USD" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);
cout << getenv("*");
//cout << endl << "Конвертация в USD временно отключена." << endl << "Код ошибки: " << getenv("error") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / 2.9264 << " USD" << endl << "Курс заснаваны 07.04.2023" << endl << endl; 
char* mySecret = getenv("dollar");
cout << getenv("**");
}

void cny (){
double byn;
cout << "Удакладніце колькасць BYN для перакладу ў CNY (кітайскій юань)" << endl << "Колькасць BYN: ";
cin >> byn;
 if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);
cout << getenv("*");
//cout << endl << "Конвертация в CNY временно отключена." << endl << "Код ошибки: " << getenv("error") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / 0.42621 << " CNY" << endl << "Курс заснаваны 07.04.2023" << endl << endl; 
char* mySecret = getenv("dollar");
cout << getenv("**");
}

void euro (){
double byn;
cout << "Удакладніце колькасць BYN для перакладу ў EUR" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);
cout << getenv("*");
//cout << endl << "Конвертация в EUR временно отключена." << endl << "Код ошибки: " << getenv("error") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / 3.1918 << " EUR" << endl << "Курс заснаваны 07.04.2023" << endl << endl; 
char* mySecret = getenv("dollar");
cout << getenv("**");
}

void rub (){
	
double byn;
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
//cout << endl << "Конвертация в RUB временно отключена." << endl << "Код ошибки: " << getenv("off") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / 0.036493 << " RUB" << endl << "Курс заснаваны 07.04.2023" << endl; 
cout << getenv("**");
}

int main() {
  char* mySecret = getenv("rub");
  int byn;
  char val1;
  cout << "Здравствуйте, выберіце валюту:" << endl << "usd=u" << endl << "rub=r" << endl << "euro=e" << endl << "cny=c\n";
  cout << "Валюта: ";
  cin >> val1;

//    while (val1 == 'u')
//      {
//        usd();
//      }
//    while (val1 == 'r')
//      {
//        rub();
//      }
//    while (val1 == 'e')
//      {
//        euro();
//      }
//    while (val1 == 'c')
//      {
//        cny();
//      }

    switch (val1) {
      case 'u':
        usd();
        break;
      case 'r':
        rub();
        break;
       case 'e':
        euro();
        break;
      case 'c':
        cny();
        break;
       case 'stop':
        cout << "Завяршаю праграму. Да пабачэння!";
        return 0;
        break;
      default:
      cout << getenv("*");
      cout << endl << "Валюта не знойдзена!" << endl << endl;
      cout << getenv("**");

  }
}
//  //