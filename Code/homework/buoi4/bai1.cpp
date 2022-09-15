#include <iostream>
#include <time.h> 
using namespace std;

int oneTwoThree(char playerChoice, int computerChoice);
string converComputer(int computerChoice);




int main(){
  srand (time(NULL));
  char playerChoice {};
  int  computerChoice {};
  int result {};
  computerChoice = rand() % 3 + 1;
  cout << "Rule:" << endl;
  cout << "B for Rock" << endl;
  cout << "O for Paper" << endl;
  cout << "K for Scissors" << endl;
  cout << "Enter your choice: ";
  cin >> playerChoice;
  playerChoice = toupper(playerChoice);
  switch (playerChoice)
  {
  case 'B':
  case 'O':
  case 'K':
    result = oneTwoThree(playerChoice, computerChoice);
    break;
  default:
    cout << "Invalid choice" << endl;
    exit(0);
  }
  cout << "Computer choice: " << converComputer(computerChoice) << endl;
  if(result == 1){
    cout <<"You win !!" << endl;
  }
  else if(result == 0){
    cout <<"Tie game!!" << endl;
  }
  else if (result == -1)
  {
    cout << "You lose !!" << endl;
  }
  else
  {
    cout << "Invalid moved !!" << endl;
  }
  
  

  cout << endl;
  return 0;
}

int oneTwoThree(char playerChoice, int computerChoice){
  if(computerChoice == 1){
    if(playerChoice == 'B'){
      return 0;
    }
    else if(playerChoice == 'O'){
      return 1;
    }
    else if(playerChoice == 'K'){
      return -1;
    }
  }
  else if(computerChoice == 2){
    if(playerChoice == 'B'){
      return -1;
    }
    else if(playerChoice == 'O'){
      return 0;
    }
    else if(playerChoice == 'K'){
      return 1;
    }
  }
  else if(computerChoice == 3){
    if(playerChoice == 'B'){
      return 1;
    }
    else if(playerChoice == 'O'){
      return -1;
    }
    else if(playerChoice == 'K'){
      return 0;
    }
  }
  return 4;
}

string converComputer(int computerChoice){
  if(computerChoice == 1){
    return "Rock";
  }
  else if(computerChoice == 2){
    return "Paper";
  }
  return "Scissors";
}