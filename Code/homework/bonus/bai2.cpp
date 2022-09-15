#include <iostream>

using namespace std;



// the ideal is find max and min number in a array, afterthat run a for loop through min to max +1 if any element in array > 0 and do not equal the for loop, it will a element we need to find so we break the loop and get the element . In some case if don't have any suitable element we get max + 1.
int findSmallestPositiveNum(int array[], int &&n){
  unsigned int maxNum{0}, findNum {}, minNum {0}, i {0}, j {0};
  maxNum =array[0];
  minNum =array[0];
  for(; i < n; i++){
    if(array[i] >= 0){
      if(maxNum < array[i]){
        maxNum = array[i];
      }
    }
  }
  for(; j < n; j++){
    if(array[j] >= 0){
      if(minNum > array[j]){
        minNum = array[j];
      }
    }
  }



  i = 0;
  j = minNum;
  

  for(; i < n; i++){
    if(array[i] >= 0){
      for(; j <= maxNum+1; ++j){
        if(array[i] != j){
          findNum = j;
          break;
        }

      }
    }
  }


  return findNum;
}






int main(){
 int array[] {1,2,3,4,5};
 int array2[] {0, -10, 1, 3, -20};
 int array3 [] {1,-21,-34,-21,2,5,6};

 cout << findSmallestPositiveNum(array, 5) << endl;
 cout << findSmallestPositiveNum(array2, 5) << endl;
 cout << findSmallestPositiveNum(array3, 7) << endl;
  

 


  cout << endl;
  return 0;
}