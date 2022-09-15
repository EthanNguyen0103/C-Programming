#include <iostream>

using namespace std;

void forLoop(int num){
  for(size_t i {num}; i> 0;i--){
    cout << i << " ";
  }
  cout << endl;
}

int main(){
  
  forLoop(5);
  forLoop(4);
  forLoop(3);
  forLoop(2);
  forLoop(1);
  
  
  cout << endl;
  return 0;
}