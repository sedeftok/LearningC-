#include <iostream>
using namespace std;

int main()
{
    int a[3]={1,2,3};
    int b[7]={9,5,1,2,3,6,7};
    // b: 2 3 4 
    // a: 0 1 2
    int aboyut=3;
    int bboyut=7;
    for (int i=0;i<bboyut;i++){
        bool esit=true;
        for (int j=0;j<aboyut;j++){
            if (a[j]!=b[i+j]){
                esit=false;
                break;
            }
        }
        if (esit){
            cout<<" alt elemani vardir ve "<<i<<" 'den baslar. "<< endl; 
        }
    }
}