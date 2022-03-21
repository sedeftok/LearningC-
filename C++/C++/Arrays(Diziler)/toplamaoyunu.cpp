#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"lütfen 5 sayi giriniz"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int eb=a[0];
    int ek=a[0];
    int toplam=0;
    for(int i=0;i<5;i++){
        toplam+=a[i];
        if(eb<a[i])
        eb=a[i];
        if(ek>a[i])
        ek=a[i];
    }
    cout<<"maks="<<toplam-ek<<endl;
    cout<<"min="<<toplam-eb<<endl;
}