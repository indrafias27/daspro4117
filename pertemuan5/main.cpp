#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Mencari Luas Lingkaran" << endl;
    cout << "Soal: " << endl;
    cout << "Diketahui Luang lingkaran dengan diameter 30cm adalah... (n=3,14)" << endl;
     cout << "Pembahasan:" << endl;
    cout << "Jari-Jari =1/2 x 30cm" << endl;
    float a, b, c, jawaban;
    a = 1;
    b = 2;
    c = 30;
     jawaban    = a / b * c ;
     cout << "jari - jari = "<< jawaban << endl;
    //RUMUS
     cout << "Rumus Luas Lingkaran : Phi x r x r" << endl;
     cout << "Luas Lingkarang = 3,14 x 15 x 15" << endl;
     float phi, r, hasil;
     phi = 3.14;
     r = 5;
     hasil = phi * r * r;
      cout << "Maka Luas Lingkaran = " << hasil << endl;
    return 0;
}
