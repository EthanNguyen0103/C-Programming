#include <iostream>

using namespace std;




void checkArray(int array[], int &&n) {
  cout << "The suitable number is: ";
  for(int i {1}; i < n; i++){
    // if we use j < n we have the same number in array what we checked
    for(int j {1}; j < i; j++){
      if((array[i] > abs(array[j-1])) && (array[i] < abs(array[j+1]))){
        cout << array[i] << " ";
      }
    }
  }
}





int main(){
  int array[] {3, -5, -8, 4, 0, 6, 9};

  checkArray(array, 7);

  cout << endl;
  return 0;
}