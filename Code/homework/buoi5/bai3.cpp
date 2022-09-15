#include <iostream>

using namespace std;

void forLoop(int num){
  for(size_t i {num}; i> 0;i--){
    cout << i << " ";
  }
  cout << endl;
}

void space(int space){
  for(size_t i {0}; i <= space;i++){
    cout << ' ';
  }
}

int main(){
  space(7);
  forLoop(1);
  space(5);
  forLoop(2);
  space(3);
  forLoop(3);
  space(1);
  forLoop(4);
  forLoop(5);
  

  cout << endl;
  return 0;
}