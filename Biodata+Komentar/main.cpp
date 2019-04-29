#include<iostream> //digunakan untuk menampilkan perintah cin, cout, endl.

using namespace std; //penyingkat atau penyederhana dari notasi yang ada dalam Library iostream seperti std::cout menjadi cout, std::endl, menjadi endl dan lainnya,

int main(){ //fungsi utama

 int NPM;
 char nama[50], Prodi[50]; //Variabel character nama, prodi, NPM, memiliki batas jumlah char 50


 cout <<" Masukkan Biodata Anda  \n"<<endl; //menampilkan teks "masukkan biodata anda", \n berfungsi pindah baris

 cout <<" Nama \t\t: "; //menampilkan teks "Nama ", \t berfungsi tab
 cin.getline(nama,50); //Pada perintah cin.getline(nama_variabel, ukuran_variabel), dapat membaca spasi pada karakter data yang kita inputkan
 cout <<" NPM \t\t: ";
 cin >> NPM; //memasukkan data pada variabel NPM
 cin.get();
 cout <<" Program Study \t: ";
 cin.getline(Prodi,50);
 cout<<"===========================================================================\n"<<endl;
 cout << "Jadi Biodata Anda Adalah \n"<<endl;
 cout<<" Nama \t\t: "<<nama<<endl; //hasil output yang kita inputkan, dan memanggil data
 cout<<" NPM \t\t: "<<NPM<<endl;
 cout<<" Program Study \t: "<<Prodi<<endl;

 return 0;
}
