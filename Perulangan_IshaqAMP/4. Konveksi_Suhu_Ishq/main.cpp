#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float i,r,f;
    cout << setw(15) << "Celsius |" << setw(15) << "Reamur |" << setw(15) << "Fahrenheit |"<<endl;
    cout << "============================================="<<endl;
    for(i=10;i<=100;i=i+10)
    {
        r=i*0.8;
        f=i*1.8+32;
    cout<< setw(13) << i <<" |" << setw(13) << r <<" |" << setw(13) << f <<" |" << endl;

    }
    return 0;
}
