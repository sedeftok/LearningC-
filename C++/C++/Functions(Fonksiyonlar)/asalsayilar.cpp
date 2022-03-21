#include <iostream>
using namespace std;

bool asalmi (int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
           return false; 
    }
    return true;
}

int main(){
    int c=1;
    for(int i=2;c<=20;i++){
        if(asalmi(i)){
            cout<<i<<endl;
            c++;
        }
    }

}