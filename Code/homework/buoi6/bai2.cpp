#include <iostream>

using namespace std;

void swap2Num(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void sortArray(int array[], int &&n) {
  for(int i {0}; i < n; i++){
    // the same if j <n but it will run a long for than j<i
    for(int j{0}; j<i; j++){
      if(array[i] >= 0 && array[j] > array[i]){
        swap2Num(array[j], array[i]);
      }
    }
  }
  for(int i {0}; i <n; i++){
    cout << array[i] << " ";
  }
}


int main(){
  int array[] {-3, 10, 3, -5, 0, 15, 8, -6};

  sortArray(array, 8);

  cout << endl;
  return 0;
}