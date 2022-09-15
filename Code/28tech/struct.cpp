#include <bits/stdc++.h>
using namespace std;


struct sv{
  string ma, ten, lop, ns;
  double gpa;

  void in(){
    cout << "--------------------------------------\n" << endl;
    cout << "Ma sinh vien: " << ma << endl;
    cout << "Ten sinh vien: " << ten << endl;
    cout << "Lop: " << lop << endl;
    cout << "Ngay sinh: " << ns << endl;
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
  }

  void nhap(){
    cout << "Nhap ma sinh vien: "; cin >> ma;
    cout << "NHap ten sinh vien: ";
    cin.ignore();
    getline(cin,ten);
    cout << "NHap lop: "; cin >> lop;
    cout << "NHap ngay sinh: "; cin >> ns;
    cout << "GPA: "; cin >> gpa;
  }
};


void inds(sv a[],  int n){
  cout << "Thong tin danh sach sinh vien: \n";
  for(int i = 0; i <n; i++){
    a[i].in();
  }
}



void tkma(sv a[], int n){
  string ma;
  cout <<" Nhap ma so sinh vien can tim: "; cin >> ma;
  bool found = false;
  for(int i = 0; i < n; i++){
    // if(ma == a[i].ma){
    //   a[i].in(); return;
    // }
    if(a[i].ma.find(ma) != string::npos){
      a[i].in();
      found = true;
    }
  }
  cout << "Khong tim thay sinh vien ! \n";
}

void lkgpa(sv a[], int n){
  double res = 0;
  vector<int> idx;
  for(int i = 0; i < n; i++){
    if(a[i].gpa > res) res = a[i].gpa;
  }
  cout << "Danh sach sinh vien co diem gpa cao nhat: \n";
  for(int i =0; i <n; i++){
    if(res == a[i]. gpa){
      a[i].in();
    }
  }
}

bool cmp1(sv a, sv b){
  return a.gpa > b.gpa;
}

void lkgpa2(sv a[], int n){
  vector <sv> v;
  for (int i=0; i < n; i++){
    if(a[i].gpa >= 2.5) v.push_back(a[i]);
  }
  sort(v.begin(), v.end(), cmp1);
  cout << "Danh sach sinh vien co diem gpa >= 2.5:\n";
  for(sv x : v){
    x.in();
  }
}

vector <string> chuanhoa(string name){
  stringstream ss(name); vector <string>  v;
  string token;
  while (ss >> token){
    v.push_back(token);
  }
  return v;
}

bool cmp2(sv a, sv b){
  vector<int>  v1= chuanhoa(a.name), v2 = chuanhoa(b.name);

}

void sxten(sv a[], int n){
  sort(a, a+n, cmp2);
}


int main(){
  sv a[1000];
  int n; // luu so sinh vien
  while (1)
  {
    /* code */
    cout << "----------------------------MENU---------------------\n";
    cout << "1.Nhap thong tin sinh vien\n";
    cout << "2.HIen thi toan bo danh sach sinh vien\n";
    cout << "3,Liet ke sinh vien co GPA cao nhat\n";
    cout << "4,liet ke cac sinh vien co GPA >= 2,5 \n";
    cout << "5.Sap xep sinh vien theo ten\n";
    cout << "0.Thoat !\n";
    cout << "------------------------------------------------\n";
    cout << "NHap lua chon: \n";
    int lc; cin >> lc;
    if(lc == 1){
      a[n].nhap();
      ++n;
    }
    else if(lc == 2){
      inds(a,n);
    }
    else if(lc == 3){
      tkma(a,n);
    }
    else if(lc == 4){
      lkgpa(a, n);
    }
    else if(lc == 5){
      lkgpa2(a, n);
    }
    else if(lc == 6){
      sxten(a, n);
    }
    else if (lc == 0)
    { 
      break;
    }
    

  }
  



  return 0;
}