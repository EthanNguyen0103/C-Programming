#include <iostream>

using namespace std;




void value(int array[], int &&n){
  int sell {}, daysell{}, buy {}, daybuy {};
  daybuy = 0;
  buy = array[0];
  for(int i {0}; i < n; i++ ){
    if(array[i] > array[i+1]){  
        daybuy = i+1;
        buy = array[i+1];
    }
  buy = array[i];
  daybuy = i;
  for(int j{0}; j < n; j++){
    if(j > i && array[j] > array[i] && array[j] > buy ){
      sell = array[j];
      daysell = j;
      i = daysell;

      break;
    }
  }
    cout << "Day buy: " << daybuy <<", Buy: " << buy << endl;
    cout << "Day sell: " << daysell <<", Sell:" << sell << endl;
  }
}





int main(){
  int array1[] {10, 20, 60, 0, -5, 100, 200, 250};
  int array2[] {20, 170, 250, 350, 40, 525, 600};

  value(array1, 8);
  cout << endl;
  value(array2, 7);

  cout << endl;
  return 0;
}