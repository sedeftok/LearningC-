#include <iostream>
using namespace std;

int ust(int t, int u){ //t^u=t*t*t*t*...*t
    int sonuc=1;
    for (int i=1;i<=u;i++){
        sonuc=sonuc*t;
    }
    return sonuc;
}
int main(){
    for(int i=1;i<=20;i++){
        cout<<ust(2,i)-1<<endl;
    }
}