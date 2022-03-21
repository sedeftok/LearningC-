#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {5,4,3,4,0,4,7,10,3};// row
    //bastıralarak içeriği gösteriliyor   
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            cout <<" "<< a[i][j];
        }
        cout<<endl;
    }
    //int b[3][3];
    //transpose alma burada yapılıyor
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int g = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = g;

        }
       
    }
    // bu sefer transpose bastırılıyor
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}

