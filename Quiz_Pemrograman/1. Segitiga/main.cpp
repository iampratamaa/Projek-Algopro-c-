#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cout << "Masukkan Batas :";
cin >> d;
for (a=1;a<=d;a++)
{
    for (b=a;b<d;b++)
    {
        cout <<"_ ";
    }
    for (c=1;c<=a*2-1;c++)

    {
        cout <<"* ";
    }
    for (e=a;e<d;e++)
    {
        cout <<"_ ";
    }
cout<<endl;

}
return 0;
}
