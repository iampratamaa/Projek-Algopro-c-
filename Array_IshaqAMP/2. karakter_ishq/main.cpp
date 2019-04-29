#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char A[10]={'i','n','d','o','e','s','a','m','r','k'};
    char B;
    int i;
    cout << "Masukkan satu Karakter : ";
    cin >> B;
    for(i=0; i<10; i++)
    {
    if(B==A[i])
        {
            cout <<"Huruf Sama Pada Index Ke-"<<i;
    break;
        }
    }
    if(B!=A[i])
        {
        cout << "Karakter TIDAK ADA";
    return 0;
}
}
