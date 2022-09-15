#include <iostream>

using namespace std;


int theMissingNumber(int array[], int &&n){
  int missNum {};
  for(int i {0}; i < n; i++){
    for(int j {0}; j < i; j++){
      if(array[j] + 1 != array[j +1]){
        missNum = array[j] +1;
        return missNum;
      }
    }
  }
}





int main(){
 int array[] {1,2,4,6,3,7,8};
 int array2[] {1,2,3,5};

cout <<  theMissingNumber(array,7) << endl;
cout << theMissingNumber(array2, 4) << endl;

  



  return 0;
}