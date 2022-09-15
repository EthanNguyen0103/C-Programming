#include <bits/stdc++.h>

using namespace std;
class Giaovien;
class Sinhvien;

class Giaovien{
  private:
    string khoa;
  public:
    void update(Sinhvien&);
};

void Giaovien::update(Sinhvien&x){
  x.gpa = 1.11;
}


class Sinhvien{
  friend class Sinhvien;
  public:
    string id, ten, ns;
    double gpa;
    static int dem;
  public:
    Sinhvien();
    Sinhvien(string, string, string, double);
    void xinchao();
    void dihoc();
    void nhap();
    void in();
    double getGPA (double gpa);
    void tangDem();
    int getDem();
    friend void chuanHoa(Sinhvien&a);
    ~Sinhvien();

};

void chuanHoa(Sinhvien&a){
  string res = " ";
  stringstream ss(a.ten);
  string token;
  while (ss>> token)
  {
    /* code */
    res+= toupper(token[0]);
    for(int i = 1; i <token.length(); i++){
      res += tolower(token[i]);
    }
    res += " "; 
  }
  res.erase(res.length() -1);
  a.ten = res;
  
}

int Sinhvien::dem = 0;
Sinhvien::Sinhvien(){
  cout << "Call constructor" << endl;
  id = ten = ns = "";
  gpa = 0;
  ++dem;
  this->id = "SV" +string(3- to_string(dem).length(), '0') + to_string(dem);
}

Sinhvien::Sinhvien(string id, string ten, string ns, double gpa){
  this->id = id;
  this->ten = ten;
  this->ns = ns;
  this->gpa = gpa;
    ++dem;
  this->id = "SV" +string(3- to_string(dem).length(), '0') + to_string(dem);
}


// Sinhvien::Sinhvien(string ma, string name, string birth, double diem){
//   cout << "Call constructor have 4 arg" << endl;
//   id = ma;
//   ten = name;
//   ns = birth;
//   gpa = diem;
// }



Sinhvien::~Sinhvien(){
  cout << "CAll destructor!\n" << endl; 
}

void Sinhvien::xinchao(){
  cout << "Hello !" << id << endl ;
}
void Sinhvien::dihoc(){
  cout << "Di hoc !\n";
}



void Sinhvien::nhap(){

  //cout << "Nhap id : "; cin >> this->id;

  cout << "Nhap ten :"; getline(cin, ten);
  cout << "Nhap ns:   "; cin >> this->ns;
  cout << "Nhap diem: "; cin >> this->gpa;
  cin.ignore();

}

void Sinhvien::in(){
  cout << this->id << " " << this->ten << " " << this->ns << " " << fixed << setprecision(2) << this->gpa << " "<< dem << endl;
}

double Sinhvien::getGPA(double gpa){
  return this->gpa;
}

bool cmp(Sinhvien a, Sinhvien b){
  // return a.getGPA() > b.getGPA();
}

int Sinhvien::getDem(){
  return dem;
}

void Sinhvien::tangDem(){
  ++dem;
}



int main(){
  string s = "java python php lap  trinsf";
  stringstream ss(s);
  string tmp;
  while(ss>> tmp){
    cout << tmp << endl;
  }
 

  return 0;
}