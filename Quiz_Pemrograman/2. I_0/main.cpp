#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Masukkan Batas :";
    cin >> d;
    for (a=1;a<=d;a++)
    {
    for (b=1;b<=a;b++)
        {
        cout << "I";
        }
        for (c=a;c<d;c++)
        {
            cout << "0";
        }
        cout << "\n";
    }
    return 0;
}
