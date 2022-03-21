#include <iostream>
using namespace std;
int main(){
    int boyut;
    cout<<" boyutu giriniz "<<endl;
    cin>>boyut;
    for(int i=1;i<=boyut;i++){
        for(int k=1;k<=boyut;k++)
        if(i+k==boyut+1)
        cout<<"1";
        else cout<<"0";
        cout<<endl;


    }
    

}