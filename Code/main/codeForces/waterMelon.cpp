#include <iostream>

using namespace std;

int main()
{
  int num {0};
  cin >> num;
  if (num > 2 && num %2 ==0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}