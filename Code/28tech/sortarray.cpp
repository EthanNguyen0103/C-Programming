#include <iostream>

using namespace std;

void printArray(int nguyen[],int countArray){
  for(int i {}; i <countArray; i++){
    cout << nguyen[i] << " ";
  }
}


void sortArray(int nguyen[], int countArray){
  
  for(int i {0};i<countArray-1;i++){
    for(int j {0};j<i;j++){
      if(nguyen[j] > nguyen[j+1])
      {
        nguyen[j] = nguyen[j+1];
      }
    }
  }
  //printArray(nguyen,countArray);
  for(int i {}; i <countArray; i++){
    cout << nguyen[i] << " ";
  }

}





int main(){

  int nguyen[] {1,43,32,12,22,0,2,32,64,65};
  int coutArray = sizeof(nguyen)/sizeof(nguyen[0]);
  sortArray(nguyen,coutArray);

  return 0;
}