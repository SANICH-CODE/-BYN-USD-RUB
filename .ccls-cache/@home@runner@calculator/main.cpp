
#include <iostream>
#include <stdlib.h>
using namespace std;

void usd (){
int byn;
cout << "Укажите кол-во BYN для конвертации в USD" << endl << "Кол-во BYN: ";
cin >> byn;
cout << getenv("*");
cout << "За " << byn << " BYN Вы получите " << byn / 2.8571 << " USD" << endl; 
char* mySecret = getenv("dollar");
cout << getenv("**");
}

void rub (){
int byn;
char* mySecret = getenv("rub");
cout << "Укажите кол-во BYN для конвертации в RUB" << endl << "Кол-во BYN: ";
cin >> byn;
cout << getenv("*");
cout << "За " << byn << " BYN Вы получите " << byn / 0.037157 << " RUB" << endl; 
cout << getenv("**");
}

int main() {
  int byn;
  char val1;
  cout << "Здравствуйте, выберите валюту для которой хотите узнать курс (usd=u/rub=r)\n";
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