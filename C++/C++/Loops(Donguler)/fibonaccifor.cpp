#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"bir sayi giriniz"<<endl;
    cin>> n;
    int a = 1;
    int b = 1;
    if (n==1)
    cout<< 1 <<endl;
    else if (n<=0);
    else
    cout<< a <<endl<< b <<endl;
    for (int i=0;i<n-2;i++){
        int c=a+b ;
        a=b;
        b=c;
        cout<< c <<endl;
    }
}