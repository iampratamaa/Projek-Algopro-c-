#include <iostream>
using namespace std;

main()
{
    int a,b,x;

    cout<<"Masukkan banyak data : ";
    cin>>x;

    for(a=0;a<=x;a++)
    {
        for(b=1;b<=a;b++)
            cout<<" ";
        for(b=1;b<=x-a;b++)
            cout<<b;
            cout<<endl;
    }
    for(a=2;a<=x;a++)
    {
        for(b=1;b<=x-a;b++)
            cout<<" ";
        for(b=1;b<=a;b++)
            cout<<b;
        cout<<endl;
    }
}
