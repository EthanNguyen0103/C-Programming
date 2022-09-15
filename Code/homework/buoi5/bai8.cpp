#include <iostream>

using namespace std;


int solvecustomer(int customer, int &countMonney500d, int &countMonney1000d, int &countMonney2000d, int &countMonney5000d, int &countMonney10000d, int &countMonney20000d, int &countMonney50000d, int &countMonney100000d, int &countMonney200000d, int &countMonney500000d ){
  cout << "Customer have " << customer << endl;
  int monney500d {500};
  int monney1000d {1000};
  int monney2000d {2000};
  int monney5000d {5000};
  int monney10000d {10000};
  int monney20000d {20000};
  int monney50000d {50000};
  int monney100000d {100000};
  int monney200000d {200000};
  int monney500000d {500000};
 
  if(countMonney500000d > 0 ){
    monney500000d = customer/monney500000d;
    if(monney500000d > 10){
      monney500000d = 10;
    }
  }
  else 
  monney500000d = 0;

  if(countMonney200000d > 0){
    monney200000d = (customer - monney500000d*500000)/monney200000d;
    if(monney200000d > 10){
      monney200000d = 10;
    }
  }
  else 
  monney200000d = 0;
  
  if(countMonney100000d > 0){
    monney100000d = (customer - monney500000d*500000 - monney200000d*200000)/monney100000d;
    if(monney100000d > 10){
      monney100000d = 10;
    }
  }
  else
  monney100000d = 0;

  if(countMonney50000d > 0){
    monney50000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000)/monney50000d;
    if(monney50000d > 10){
      monney50000d = 10;
    }
  }
  else
  monney50000d = 0;


  if(countMonney20000d > 0){
  monney20000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 )/monney20000d;
    if(monney20000d > 10){
      monney20000d = 10;
    }
  }
  else
  monney20000d = 0;


  if(countMonney10000d > 0){
  monney10000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 - monney20000d*20000 )/monney10000d;
    if(monney10000d > 10){
      monney10000d = 10;
    }
  }
  else
  monney10000d = 0;

  if(countMonney5000d > 0){
  monney5000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 - monney20000d*20000 - monney10000d * 10000 )/monney5000d;
    if(monney5000d > 10){
      monney5000d = 10;
    }
  }
  else
  monney5000d = 0;

  if(countMonney2000d > 0){
  monney2000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 - monney20000d*20000 - monney10000d *10000 - monney5000d*5000)/monney2000d;
    if(monney2000d > 10){
      monney2000d = 10;
    }
  }
  else
  monney2000d = 0;


  if(countMonney1000d > 0){
  monney1000d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 - monney20000d*20000 - monney10000d *10000 - monney5000d*5000 - monney2000d*2000)/monney1000d;
    if(monney1000d > 10){
      monney1000d = 10;
    }
  }  
  else
  monney1000d = 0;

  if(countMonney500d > 0){
  monney500d = (customer - monney500000d*500000 - monney200000d*200000- monney100000d*100000 - monney50000d*50000 - monney20000d*20000 - monney10000d *10000 - monney5000d*5000 - monney2000d*2000 - monney1000d*1000)/monney500d;
    if(monney500d > 10){
      cout << "Out of money" << endl << endl;
      return 0;
    }
  }
  else
  monney5000d = 0;

  countMonney500d -= monney500d;
  countMonney1000d -= monney1000d;
  countMonney2000d -= monney2000d;
  countMonney5000d -= monney5000d;
  countMonney10000d -= monney10000d;
  countMonney20000d -= monney20000d;
  countMonney50000d -= monney50000d;
  countMonney100000d -= monney100000d;
  countMonney200000d -= monney200000d;
  countMonney500000d -= monney500000d;
 

  cout << monney500000d << endl;
  cout << monney200000d << endl;
  cout << monney100000d << endl;
  cout << monney50000d << endl;
  cout << monney20000d << endl;
  cout << monney10000d << endl;
  cout << monney5000d << endl;
  cout << monney2000d << endl;
  cout << monney1000d << endl;
  cout << monney500d << endl;


  cout << endl;
}


int main(){
  int countMonney500d {10};
  int countMonney1000d {10};
  int countMonney2000d {10};
  int countMonney5000d {10};
  int countMonney10000d {10};
  int countMonney20000d {10};
  int countMonney50000d {10};
  int countMonney100000d {10};
  int countMonney200000d {10};
  int countMonney500000d {10};

  int customer1 {};
  int customer2 {};
  int customer3 {};
  int customer4 {};
  int customer5 {};
  int customer6 {};
  int customer7 {};
  int customer8 {};
  int customer9 {};
  int customer10 {};
  customer1 = 5000000;
  customer2 = 2000000;
  customer3 = 1000000;
  customer4 = 500000;
  customer5 = 200000;
  customer6 = 100000;
  customer7 = 50000;
  customer8 = 20000;
  customer9 = 10000;
  customer10 = 5000;

  solvecustomer(customer1, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer2, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer3, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer4, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer5, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer6, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer7, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer8, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer9, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);

  solvecustomer(customer10, countMonney500d, countMonney1000d, countMonney2000d, countMonney5000d, countMonney10000d, countMonney20000d, countMonney50000d, countMonney100000d, countMonney200000d, countMonney500000d);
  


  cout << endl;
  return 0;
}


