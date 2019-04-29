#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    for (a=1;a<=5;a++)
    {
    for (b=1;b<=a;b++)
        {
        cout << "i";
        }
        for (c=a;c<=5;c++)
        {
            cout << "0";
        }
        cout << "\n";
    }
    return 0;
}
