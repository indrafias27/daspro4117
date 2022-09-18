#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char n[50];
    int u;
    cout << "PERTEMUAN 3" << endl;
    cout << "INDRA FIAS YULIAN PRAYOGA \nA11.2011.14661 \nSMA N 1 GEMUH \n" << endl;
    int x = 19;
    float t =172.3;
    char b ='L';
    string bu = "Baca Komik";
    cout << "\nUmur:"<< x;
    cout << "\nTinggi Badan:" << t;
    cout << "\nUkuran Baju:"<< b;
    cout << "\nHobi:"<< bu;
    // Menggunakan scanf
    scanf("%s", n);
    cout << endl;
    printf("Hallo %s", n);
    //menggunakan cin
    cin >> u;
    cout << "NAMA:";
    cout << ",";
    cout << "umurku " << u << "tahun" << endl;

    return 0;
}
