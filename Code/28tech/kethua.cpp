#include <iostream>
#include <string>

using namespace std;

class Person{
  private:
    string name;
    string address;
  public:
    Person();
    Person(string name, string address);
    string getName(){
      return name;
    }
    string getAddress(){
      return address;
    }
    void setName(string name){
      this->name = name;
    }
    void setAddress(string address){
      this->address = address;
    }
    friend std::ostream& operator <<(std::ostream& out, const int){
      return out;
    };
};

Person :: Person(){
  this->name = '0';
  this->address = '0';
}

Person :: Person (string name, string address){
  this->name = name;
  this->address = address;
}

class Student: public Person{
  private:
    float gpa;
  public:
    float getGPA(){
      return gpa;
    }
    void setGPA(float gpa){
      this->gpa = gpa;
    }
};



int main(){
  Person x;

  return 0;
}