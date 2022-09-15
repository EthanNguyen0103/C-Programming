#include <iostream>

using namespace std;

void separatedArray(int array[], int &&n){
  int i{},j{};
  int count {0};
  int choice {};
  cout << array[0] << " ";
  for(i =0; i<n; i++){
    for(j = 0; j<i;j++){
      if(array[j] == array[i]){
        choice = 0;
        break;
      }
      else{
        choice = 1;
      }
    }
    if(choice ==1){
      cout << array[i] << " ";
      count++;
    }
    }
  cout << endl;
  cout << "There are " <<  ++count << " different numbers";
  }



int main(){
  int array[] = {1, 2, 1, 4, 5, 3, 2, 2, 6, 8, 6};

  separatedArray(array, 11);
  
  cout << endl;
  return 0;
}