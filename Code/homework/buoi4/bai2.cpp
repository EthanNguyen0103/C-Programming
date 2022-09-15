#include <iostream>

using namespace std;

void solve();

int main()
{
    cout << "Yeu nhau cau sau bo ba" << endl;
    cout << "Ghet nhau cau sau bo ra lam muoi" << endl;
    cout << "Moi nguoi mot mieng tram nguoi" << endl;
    cout << "Co muoi bay qua hoi nguoi moi yeu" << endl;
    solve();



    cout << endl;
    return 0;
}

void solve()
{
    for(int i {1}; i<=100;++i){
        for(int j {1}; j <=100;++j){
            if(i + j == 100 && (static_cast <double> (i)/3+ static_cast <double> (j)/10 == 17)){
                cout << "Co: " << i << " nguoi ghet va " << j << " nguoi thuong" << endl;
            } 
        }
    }
}