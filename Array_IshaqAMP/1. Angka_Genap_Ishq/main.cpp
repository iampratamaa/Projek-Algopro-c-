#include <iostream>

using namespace std;
int main()
{

int A[50],c=0;
for (int i=1;i<=100;i++)
{
  if(i%2==0)
  {
    A[c]=i;
    c++;
  }
 }
cout<<"Ganjil"<<endl;
  for(int i=0;i<50;i++)
    {
    cout<<A[i]<<" ";
    }
 return 0;
}
