#include <iostream>

using namespace std;



// x is number want to check
void checkArray(int array[], int &&n, int &&x) {
  int maxValue {};
  int maxIndex {};
  maxValue = array[0];
  for(int i {0}; i < n; i++){
    cout << array[i] << " : " << abs(x-array[i]) << endl;
    if(maxValue < abs(x-array[i]))
    {
      maxValue = abs(x-array[i]);
      maxIndex = array[i];
    }
  }
  cout << "The largest value number in array is: " << maxIndex << " is " << maxValue << endl; 
} 




int main(){
  int array[] {1, -3, 8, 6, 2};

  checkArray(array, 5, 5);

  cout << endl;
  return 0;
}