#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int c;
    int d=1;
    int e=0;
    int f[100],g=0;

    cout << "Bilangan Fibonaci" << endl;
    cout << "Masukkan Batas Awal : ";
    cin >> a;
    cout << "Masukkan Batas Akhir : ";
    cin >> b;

 for(int i=1;i<b;i++)
{
  c = d + e;
  e = d;
  d = c;
    {
    f[i]=c;
    g++;
    }
 }

  for(int i=a-1;i<b;i++)
    {
    cout<<f[i]<<" ";}
    return 0;
}
