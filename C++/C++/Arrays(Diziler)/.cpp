#include <iostream>
using namespace std;

 int main(){
     int a[5];
     for (int i=0;i<5;i++){
         cin>> a[i];
     }
 
 // en büyük
 int eb=a[0];
 for(int i=1;i<5;i++){
     if(a[i]>eb){
         eb=a[i];
     }
   }
   cout<< "en buyuk:"<< eb <<endl;
   int ek=a[0];
 for(int i=1;i<5;i++){
     if(a[i]<eb){
         ek=a[i];
     }
   }
   cout<<"en kucuk"<<ek<<endl;
 }

 