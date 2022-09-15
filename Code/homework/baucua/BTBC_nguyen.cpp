#include <iostream>
#include <time.h>  
#include <cstring>
#include <limits>

using namespace std;

int *createDice();
string createObject(int iSecret);
int *drawGame(int iMoney);
int betLoGic(int iplayMoney,int iBet);



int main(){
 
  int iMoney {500000};
  int *drawGameMain;
  while(iMoney>0){
    drawGameMain = drawGame(iMoney);
    iMoney -= drawGameMain[0];
    iMoney += betLoGic(drawGameMain[0], drawGameMain[1]);
    if (iMoney <=0){
      cout << "Turn out of money" << endl;
      exit(0);
    }
  }
  cout << "Turn out of money" << endl;

  cout << endl;
  return 0;
}

int *createDice(){
  int iSecret {};
  srand (time(NULL));
  int *dice = new int[3];
  for(int i {0}; i<3; i++){
    //lowerBound + rand() % (upperBound - lowerBOund +1)
    iSecret = (rand() % 6 ) + 1 ;
    dice[i] = iSecret;
    cout << createObject(dice[i]) << ' ';
  }
  // delete[] dice;
  cout << endl;
  return dice;
}

int *drawGame(int iMoney){
  if(iMoney < 0 ){
    cout << "You don't have enough money to play game" << endl;
    exit(0);
  }
  int iBet;
  int iplayMoney {};
  int *redrawGame = new int[3];
  cout << "1.GA" << endl;
  cout << "2.BAU" << endl;
  cout << "3.CUA" << endl;
  cout << "4.TOM" << endl;
  cout << "5.CA" << endl;
  cout << "6.HUOU" << endl;
  cout << "0.OUT" << endl;
  cout << "You have: " << iMoney;
  do{
    cout << "\nEnter your number: ";
   cin >> iBet;
    while(!iBet){
      cout << "Wrong plz enter a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Enter your number: ";
      cin >> iBet;
    }
    if(createObject(iBet) == "ERROR"){
      cout << "Plz enter number in limit range" << endl;
    }   
  }
  while(createObject(iBet) != "GA" && createObject(iBet) != "BAU" && createObject(iBet) != "CUA" &&createObject(iBet) != "TOM" &&  createObject(iBet) != "CA" && createObject(iBet) != "HUOU");
  cout << "Enter your bet: ";
  cin >> iplayMoney;
  if(iMoney < iplayMoney){
    cout << "You don't have enough money to bet" << endl;
    drawGame(iMoney);
  }
  redrawGame[0] = iplayMoney;
  redrawGame[1] = iBet;
  // delete[] redrawGame;
  return redrawGame; 
}



string createObject(int iSecret){
  switch (iSecret)
  {
    case 1:{
      return "GA";
    }
    case 2:{
      return "BAU";
    } 
    case 3:{
      return "CUA";
    }
    case 4:{
      return "TOM";
    }
    case 5:{
      return "CA";
    }
    case 6:{
      return "HUOU";
    }
    default:{ 
    return "ERROR";
    }
  }
}

int betLoGic(int iplayMoney, int iBet){
      system("clear");
  int *dice;
  dice = createDice();
  int exMoney {0}; 
  for(int i {0}; i <3; i++){
    if(iBet == dice[i]){
      exMoney += iplayMoney*2; 
    }
  }
  if(exMoney >0){
    cout << "You win:" << exMoney << endl;
  }
  else
    cout << "You lose: " << iplayMoney << endl;

  return exMoney;
}
