#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    float nilai, total = 0, rata;
    int n;

    cout << "Masukkan Jumlah Nilai \t: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan Nilai Ke-"<<i<<"\t: ";
        cin >> nilai;
        total = total + nilai;
    }
    cout << "Total\t\t\t: " << total << endl;
    rata = total / n;
    cout << "Rata-rata\t\t: " << rata;
    getch();
}
