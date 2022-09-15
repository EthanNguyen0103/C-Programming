#include <iostream>
#include <math.h>

using namespace std;


int countNum(int num){
  num = floor(log10(abs(num))) + 1;

  return num;
}
int selectFirstNum(int num){
  num = num/(pow(10,(countNum(num)-1)));

  return num;
}

int checkArray(int array[], int &&n) {
  int num {};
  for(int i {0}; i < n; i++){
    if(selectFirstNum(array[i]) % 2 != 0){
      return array[i];
    }
  }
  return 0;
}





int main(){
  int array[] {2, 25, 3567, 100, 985};
  
  cout << checkArray(array, 5) << endl;
  cout << endl;
  return 0;
}