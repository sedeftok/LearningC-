#include <iostream>
using namespace std;

int main(){
    int boyut;
    cout<<" boyut giriniz "<<endl;
    cin>> boyut;
    {
        for(int k=1;k<=boyut;k++){
            for(int i=1;i<k;i++)
            cout<<" ";
            for(int m=1;m<=boyut-k+1;m++)
            cout<<"*";
            cout<<endl;
        }
        
    }
}