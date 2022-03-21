#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<" dikey sütun boyutunu giriniz "<<endl;
    cin>>n;
    cout<<" yatay sütun boyutunu giriniz "<<endl;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int t=1;t<=m;t++){
        cout<<i*t<<"  ";
        }
        cout<<endl;

    }
}
