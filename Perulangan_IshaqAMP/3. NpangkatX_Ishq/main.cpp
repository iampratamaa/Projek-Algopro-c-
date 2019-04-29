#include <iostream>

using namespace std;

int main()
{
    int a,b,h,i;
    i=1,h=1;
    cout << "Masukkan Nilai : ";
    cin >>a;
    cout << "Masukkan Pangkat :";
    cin >>b;
    for (i=1; i<=b; i++)
    {
        h= h*a;
    }
    cout <<h<<" ";
    return 0;
}
