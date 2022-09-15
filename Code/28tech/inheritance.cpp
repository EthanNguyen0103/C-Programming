#include <iostream>

using namespace std;

class base{
  private:
    int a;
    int b;
  public:
    base();
    base(int a, int b);
    int func();
    void nhap();
    void in();
};

base::base(){
  this->a = 0;
  this->b = 0;
}

base::base(int a, int b){
  this->a =a;
  this->b =b;
}
//dinamic inheritance
class ClassA{
  public:
    int a = 5;
};
class ClassB: virtual public ClassA {
  public:
    int b = 11;
};
class ClassC: virtual public ClassA{
  public:
    int c = 10;
};
class classD: public ClassB, public ClassC{
  public:
    int d = 100;
};


int base::func(){
  return this->a;
}

class device : public base{

};

void base::nhap(){
  cin >> this->a;
}

void base::in(){
  cout << this->a;
}


int main(){
  base sos;
  device no;

  sos.nhap();
  sos.in();

  return 0;
}