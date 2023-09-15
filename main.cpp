#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string>


using namespace std;


void stop() {
  cout << "Завяршаю праграму. Да пабачэння!";
}

void usd (){

float usd_r = 3.2533 ; 
double byn;
cout << "Удакладніце колькасць BYN для перакладу ў USD" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
   
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);

//cout << endl << "Конвертация в USD временно отключена." << endl << "Код ошибки: " << getenv("error") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / usd_r << " USD" << endl << "Курс заснаваны 15.09.2023" << endl << endl;

}

void cny (){
float cny_r = 0.000 ; 
double byn;
//cout << "Удакладніце колькасць BYN для перакладу ў CNY (кітайскій юань)" << endl << "Колькасць BYN: ";
//cin >> byn;
 if (byn > 1000000)
  {
   cout << getenv("***");
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);
cout << endl << "Конвертация в CNY временно отключена." << endl << "Администратор: S.Nikitko " << endl << "Комментарий: Отключено по тех.причинам "<< endl << "Причина: Отключено по тех.причинам " << "" << endl;
//cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / 0.42621 << " CNY" << endl << "Курс заснаваны 07.04.2023" << endl << endl; 

}

void euro (){
float eur_r = 3.4903 ; 
double byn;
cout << "Удакладніце колькасць BYN для перакладу ў EUR" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {
 
   cout << endl << "Результат может быть некорректен!" << endl;
  }
sleep (2);

//cout << endl << "Конвертация в EUR временно отключена." << endl << "Код ошибки: " << getenv("error") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / eur_r << " EUR" << endl << "Курс заснаваны 15.09.2023" << endl << endl; 

}

void rub (){
float rub_r = 0.0339 ; 
double byn;

cout << "Удакладніце колькасць BYN для перакладу ў RUB" << endl << "Колькасць BYN: ";
cin >> byn;
  if (byn > 1000000)
  {

   cout << endl << "Результат может быть некорректен" << endl;
  }
sleep (2);

//cout << endl << "Конвертация в RUB временно отключена." << endl << "Код ошибки: " << getenv("off") << endl << "" << endl;
cout << endl << "За " << byn << " BYN Вы атрымаеце " << byn / rub_r << " RUB" << endl << "Курс заснаваны 15.09.2023" << endl << endl ; 

}

int main() {


  int byn;
  char val1;
  cout << "Здравствуйте, выберіце валюту:" << endl << "usd=u" << endl << "rub=r" << endl << "euro=e" << endl << "cny=c\n";
  cout << "Валюта: ";
  cin >> val1;
  // cout << "Здравствуйте, система временно отключена.\n";

//    while (val1 == 'u')
//      {
//        usd();
//}
//     while (val1 == 'r')
//      {
//        rub();
//     }
//   while (val1 == 'e')
//      {
//     euro();
//      }
//    while (val1 == 'c')
//      {
//        cny();
//      }

    switch (val1) {
//      case 'a':
//        login();
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
      case 's':
        stop();
        break;

      default:
      cout << getenv("*");
      cout << endl << "Валюта не знойдзена!" << endl << endl;
      cout << getenv("**");

  }
}
