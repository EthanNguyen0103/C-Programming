#include <iostream>


using namespace std;

int main()
{
  int money {};
  cout << "Enter an amount in money: ";
  cin >> money;
  
  int money500 {0};
  int money200 {0};
  int money100 {0};
  if(money != 0){
    money500 = 500;
    money200 = 200;
    money100 = 100;
    if(money%money500 == 0){
      money500 = money/money500 -1;
    }
    else{
      money500 = money/money500;
    }
    if((money-money500*500)%money200 == 0){
      money200 = (money-money500*500)/money200 -1;
    }
    else{
      money200 = (money-money500*500)/money200;
    }
    money100 = (money-money500*500-money200*200)/money100;
  }



  cout << "500D: " << money500 << endl;
  cout << "200D: "<< money200 << endl;
  cout << "100D: " << money100 << endl;
 
  





  cout << endl;
  return 0;
}