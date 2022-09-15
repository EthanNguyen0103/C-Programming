#include <iostream>

using namespace std;

class A{
  public:
    A(){
      cout << "COnstructor for class A\n";
    }
    ~A(){
      cout << "Desstructor for class A\n";
    }
    void hello(){
      cout << "Hello A" << endl;
    }
};

class B : public A{
  public:
    B(){
      cout << "COnstructor for class B\n";
    }
    ~B(){
      cout << "Desstructor for class B\n";
    }
    void hello(){
      A::hello();
      cout << "Hello B" << endl;
    }
};

class C : public B{
  public:
    C(){
      cout << "COnstructor for class C\n";
    }
    ~C(){
      cout << "Desstructor for class C\n";
    }
    void hello(){
      B::hello();
      cout << "Hello C" << endl;
    }
};

typedef long long ll;

ll bee = 11;

int main(){
  C obj;

  obj.hello();


  return 0;
}