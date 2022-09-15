#include <bits/stdc++.h>

using namespace std;

class Sinhvien{
  private:
    string id, ten, ns;
    double gpa;
  public:
    friend istream& operator >> (istream &in, Sinhvien &a);
    friend ostream& operator << (ostream &out, Sinhvien a);
    bool operator < (Sinhvien a);
};

bool Sinhvien::operator < (Sinhvien a){
  return this->gpa < a.gpa;
}


istream &operator >> (istream &in, Sinhvien &a){
  cout << "Nhap id: "; in >> a.id;
  cout << "NHap ten: ";
  in.ignore();
  getline(in, a.ten);
  cout << "Nhap ngay sinh: "; in >> a.ns;
  cout << "NHap diem: "; in >> a.gpa;
  return in;
}

ostream &operator << (ostream &out, Sinhvien a){
  cout << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
  return out;
}


int main(){
  Sinhvien x, y;
  cin >> x >> y;
  if(x < y) cout << "YES";
  else cout << "NO";

  return 0;
}