#include <iostream>
using namespace std;
 int main(){
     int rg;
     srand (time(NULL));//seed
     rg=rand()%6+1;// bir ile 6 arasındaki sayıyı döndür ,zar
     cout<<rg<<endl;
     rg=rand()%2;// 0 veya 1 0->yazı 1-> tura
     cout<<rg<<endl;
     rg=rand()%100;
     cout<<rg<<endl;

 }