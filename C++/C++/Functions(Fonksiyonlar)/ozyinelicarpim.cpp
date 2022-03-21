#include <iostream>
using namespace std;

int carpimR (int a,int b){
    if(a==0||b==0)
        return 0;
    if(b<0) 
       return carpimR(-a,-b);  
    return a+carpimR(a,b-1);
    
}

int carpim(int a,int b){
    int sonuc=0;
    for(int i=0;i<b;i++)
    sonuc=sonuc+a;
    return sonuc;
}

int main(){
     cout<<carpimR(4,-12)<<endl;
     cout<<carpim(4,-12)<<endl;
}
