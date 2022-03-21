#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; //kaç zar atılacağı 
    srand(time (NULL));
    int skor=0;
    int a[n];
    int b[n];

    //int z = rand()%6 --> 0 ile 6 arasında bir değer döndürür biz 6 sayı istediğimiz için +1 i de ekliyoruz
    for(int i=0;i<n;i++){
        int z1 = rand()%6+1;
        int z2 = rand()%6+1;
        a[1]=z1;
        b[1]=z2;

        if (z1>z2){
            skor++;
        }
        else if(z2>z1){
            skor--;
        }
    }
    for(int i=0;i<n;i++) // for dan sonra {} koymadık çünkü döngüden sonraki satır zaten kendisinin kabul edilir ilk onu tamamlar sonra bi 
    // alttakini yapar.
       cout<< a[i] <<" ";
       cout<< endl;
    for(int i=0;i<n;i++)
       cout<< b[i] <<" ";
       cout<< endl;
    if(skor>0)
    cout<<"1 kazandıııııııııuuı"<<endl;
    else if(skor<0)
    cout<<" 2 kazandı"<<endl;
    else
    cout<<"berabere"<<endl;
 
}