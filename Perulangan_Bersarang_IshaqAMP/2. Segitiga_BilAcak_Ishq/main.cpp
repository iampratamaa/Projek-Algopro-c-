#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,a,b,c;
    srand(9);
    for (a=0;a<=10;a++)
{
    for (b=a;b<=10;b++)
    {
        cout <<" ";
    }
    for (c=1;c<=a*2-1;c++)

    {
        cout<<rand()%10<<"";
    }
    cout<<endl;

}
    return 0;
}
