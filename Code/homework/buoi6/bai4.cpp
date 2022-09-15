#include <iostream>

using namespace std;


int checkEven(int array[], int &&n){
  int even {1};
  for(int i {0}; i < n; i++){
    if(array[i] %2 == 0){
      even = array[i];
    }
  }

  cout << endl;
  return even;
}


int main(){
  int array[] {-3, 10, 3, -5, 0, 15, 8, -6};
  int array2[] {-3, 1, 3, -5, 1, 15, 1, 7};

  cout << checkEven(array, 8);
  cout << checkEven(array2, 8);

  cout << endl;
  return 0;
}