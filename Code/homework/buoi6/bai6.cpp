#include <iostream>

using namespace std;




int checkArray(int array[], int &&n, int &&x, int &&y) {
  for(int i {0}; i < n; i++){
    if(array[i] > x && array[i] < y){
      cout << "The suitable number is: " << array[i] << endl;
      return 0;
    }
  }
  cout << "Don't have suitable value" << endl;
}





int main(){
  int array[] {3, -10, 5, 15, 20};
  checkArray(array, 5, 4, 10);
  checkArray(array, 5, 20, 30);

  cout << endl;
  return 0;
}