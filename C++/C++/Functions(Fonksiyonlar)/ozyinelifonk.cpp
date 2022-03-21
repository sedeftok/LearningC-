#include <iostream>
using namespace std;
/*
carp(2,4)=2+carp(2,3)
carp(2,3)=2+carp(2,2)
carp(2,2)=2+carp(2,1)
carp(2,1)=2+carp(2,0)
carp(x,0)=0
.x yerine ne gelirse gelsin sonuç sıfır
.birbirine dönüşecek şekilde fonksiyon yazılmalıdır (kendi cinsinden)*/

#include <iostream>
using namespace std;

int faktoriyelr(int n){ //recursive
    if(n==1)
      return 1;
    return n*faktoriyelr(n-1);//sayılar azalarak en son 1! e kadar ulaşacak, 1! i bulunca da bütün değerleri yerine koyarak istenen sayıya kadar hesaplar
}

int main(){
    cout<< faktoriyelr(5)<<endl;
    
}