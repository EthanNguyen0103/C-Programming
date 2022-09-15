#include <iostream>

using namespace std;

int main(){
  char character {'a'};
  for(int i {0}; i < 26; i++){
    cout << "Alphabet: " << character++ << ", ";
    cout << "ASCII: " << static_cast <int> (character) << endl;
  }
  cout << endl;
  return 0;  
}