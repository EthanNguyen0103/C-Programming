#include<stdio.h>

void sortArray(int array[], int sizeArray){
  for(int i =0; i < sizeArray -1; i++ ){
    for(int j = 0; j < sizeArray -i - 1; j++){
      if(array[j+1] < array[j]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

void printArray(int array[], int sizeArray){
  for(int i =0; i < sizeArray; i++){
    printf(" %d ", array[i]);
  }
  printf("\n");
}

class Player
{
  private:
    std::string name;
    int health;
    int xp;
  public:
    string get_name () {return name;};
};

int main(){
  int array[] = {1,21,43,65,232,53,23};
  int sizeArray = sizeof(array)/sizeof(array[0]);

  sortArray(array,sizeArray);
  printArray(array,sizeArray);

  return 0;
}
