#include <iostream>
#include <vector>

using namespace std;

int count(int num){
  int count {};
  while(num>=10){
    num/=10;
    count ++;
  }
  return count;
}

int max(int num){
  int max {0};
  int temp {0};
  if (num == 0){ 
  return max;
  }
  while (num > 0) {
    temp = num % 10;
    num /= 10;
    if (temp > max)
        max = temp;
  }
  return max;
}
int min(int num){
  int min {};
  min = num %10;
  int temp {0};
  if (num == 0){ 
  return min;
  }
  while (num > 0) {
    temp = num % 10;
    num /= 10;
    if (temp < min)
        min = temp;
  }
  return min;
}

int main(){
  int num {};
  cout << "Enter the number: " << endl;
  cin >> num;

  cout << "The number have " << count(num) + 1 << " numbers" << endl; 
  cout << "The largest number is " << max(num) << endl; 
  cout << "The smallest number is " << min(num) << endl; 


  cout << endl;
  return 0;
}