#include <iostream>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"a sayisini giriniz"<< endl;
    cin>>a;
    cout<<"b sayisini giriniz"<< endl;
    cin>>b;
    cout<<"c sayisi giriniz"<< endl;
    cin>>c;
    if (a>b && a<c || a>c && a<b)
    {
        cout<<"a sayisi b ve c nin arasında bir değerdir. " << endl;
    }
    else 
    {
        cout<<"a sayisi b ve c nin arasında değildir. " << endl;
    }
}