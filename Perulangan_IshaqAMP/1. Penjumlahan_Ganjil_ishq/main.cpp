#include <iostream>

using namespace std;

int main(){
int a=1;
int penjumlahan=0;
cout<<"Penjumlahan Bilangan Ganjil :"<<endl;
    for(a=1; a<=50; a++)
    {
        if(a%2==1)
        {
        cout<<a<<" ";
        penjumlahan+=a;
        }
    }
    cout<<"\njumlah ="<<penjumlahan;
}
