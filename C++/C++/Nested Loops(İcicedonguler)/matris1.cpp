#include <iostream>
using namespace std;
int main(){
    int s;
    cout<<"bir sayi giriniz"<<endl;
    cin>>s;
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
}
