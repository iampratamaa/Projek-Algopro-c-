#include <iostream>

using namespace std;

int main()
{
    int bil_genap[50],i,indeks;
    indeks=0;
    for (i=2; i<150 ;i++)
    {
    	if (i % 2 == 0) {
        bil_genap[indeks]=i;
        indeks++;
    	}
    }

    for (i=0; i<50; i++){
        cout << bil_genap[i]<<" ";
    }
    return 0;
}
