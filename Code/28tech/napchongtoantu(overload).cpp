#include <iostream>

using namespace std;


class Sinhvien{
  private:
    string id, ten, ns;
    double gpa;
  public:
    Sinhvien();
    friend istream & operator >> (istream &in, Sinhvien & a);
    friend ostream & operator << (ostream &out, Sinhvien a);
    //bool operator  < (Sinhvien a);
    friend bool operator < (Sinhvien a,Sinhvien b);

};

// bool Sinhvien::operator  < (Sinhvien a){
//   return this->gpa < a.gpa;
// }

bool operator < (Sinhvien a, Sinhvien b){
  return a.gpa < b.gpa;
}

Sinhvien ::Sinhvien(){
  this->id = '0';
  this->ten = '0';
  this->ns = '0';
}


istream &operator >> (istream &in, Sinhvien &a){
  cout << "NHap id: ";
  in >> a.id;
  cout << "NHap ten: ";
  in.ignore();
  getline(in, a.ten);
  cout << "Nhap ngay sinh: ";
  in >> a.ns;
  cout << "Nhap gpa: ";
  in >> a.gpa;
  return in;
}

ostream &operator << (ostream &out, Sinhvien a){
  cout << a.id << " " << a.ten << " " << a.ns << " " << a.gpa;
}

int main(){
  Sinhvien x;
  cin >> x;
  cout << x;
  Sinhvien y;
  cin >> y;
  cout << y;
  bool c = x <y;
  cout << c << endl;
  return 0;
}