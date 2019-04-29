#include <iostream>
using namespace std;
int main(){
int a,b,c;
for (a=1;a<=9;a++)
{
    for (b=a;b<=9;b++)
    {
        cout <<"  ";
    }
    for (c=1;c<=a*2-1;c++)

    {
        cout <<" "<<a;
    }
cout<<endl;

}
return 0;
}
