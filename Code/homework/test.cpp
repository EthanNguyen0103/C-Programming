#include <iostream>
#include <fstream>

using namespace std;




int main(){
  int a = 32;
  std::ofstream inf{"sample.txt", ios::ate };
  inf << "ds";
  std::ofstream inf1{"sample.txt", ios::app};
  inf1 << a++;
  return 0;
}