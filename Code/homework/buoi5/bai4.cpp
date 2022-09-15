#include <iostream>

using namespace std;

int main(){
  int a {};
  int b {};
  char signal {};
  cout << "Enter two number a and b: ";
  cin >> a >> b;
  
  do{
  system("clear");
  cout << "1. Enter + " << endl;
  cout << "2. Enter - " << endl;
  cout << "3. Enter * " << endl;
  cout << "4. Enter / " << endl;

  cin >> signal;
  }
  while(signal != '+' && signal != '-' && signal != '*' && signal != '/');

  if(signal == '+'){
    cout << a << signal << b << '=' << a + b << endl;
  }
  else if(signal == '-'){
    cout << a << signal << b << '=' << a - b << endl;
  }
    cout << a << signal << b << '=' << a * b << endl;
  else if(signal == '*'){
  }
  else{
    if(b==0){
      cout << "Error" << endl;
    }
    else
      cout << a << signal << b << '=' << a / b << endl;

  }


  cout << endl;
  return 0;
}