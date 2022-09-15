#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int num = 7;
  int count;
  int guest;
  time_t t;
  srand((unsigned)time(&t));
  int randonNumber = rand() %100 + 1;
 
  do{
  system("clear");
  cout <<"This is a guessing game\n You have chosen a number betwwen 1 and 100 which you must guess. Enjoy!!" << endl;
 


  cout << "You have only "<< num << " changes: " << endl;
  cout << "Enter your number: ";
  cin >> guest;
  }
  while(guest > 100 || guest <= 0);


  while (guest <= 100 && guest > 0)
  {
    if (guest>randonNumber)
    {
      --num;
      if(num == 0)
      {
        cout << "You lose" << endl;
        cout << "Number is:" << randonNumber << endl;
        break;
      }
      cout <<"Number less than that" << endl;
      cout << "You have " <<num<< " changes: ";
      cin >> guest;


    }
    else if (guest<randonNumber)
    {
      --num;
      if(num == 0)
      {
        cout << "You lose" << endl;
        cout << "Number is: "<< randonNumber << endl;
        break;
      }
      cout << "Number is bigger than that" << endl;
      cout << "You have " <<num<< " changes: ";
      cin >> guest;

    }
    else
    {
      cout << "You win" << endl;
      break;
    }
    
  }

  cout << endl;
  return 0;
}
  
 




