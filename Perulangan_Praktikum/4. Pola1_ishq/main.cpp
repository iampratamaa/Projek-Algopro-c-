#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int x, y, z, bil=10;
for( x = 1; x <= bil; x++ )
{
for( z = bil; z >= x; z-- )
cout << ' ';
for( z = 1; z < 2*x; z++ )
{
y = z % 10;
cout << y;
}
cout << endl;
}
getch();
}
