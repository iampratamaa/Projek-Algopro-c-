#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i=10;i<=100;i++){
        if ((i%2==0)&&(i%4!=0)){
            cout<<i<< " ";
        }
    i++;
    };
    return 0;
}
