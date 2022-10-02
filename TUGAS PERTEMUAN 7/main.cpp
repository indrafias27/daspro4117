#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;


    cout << "==--JURUSAN--==" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informatika" << endl;
    cout << "3. DKV" << endl;

    cout << "Masukan Jurusan Anda" << endl;

    cin >> a;
    cout << "jurusan anda adalah: " ;
    if (a < 2 & a > 0) {
        cout << "Teknik Informatika" << endl;
    } else {
        cout << "Jurusan Tidak diketahui" << endl;
    }

    cin >> b;
    cout << "jurusan anda adalah: " ;
    if (b < 2 & b > 0) {
        cout << "Sistem Informatika" << endl;
    } else {
        cout << "Jurusan Tidak diketahui" << endl;
    }

    cin >> c;
    cout << "jurusan anda adalah: " ;
    if (c < 2 & c > 0) {
        cout << "DKV" << endl;
    } else {
        cout << "Jurusan Tidak diketahui" << endl;
    }
    return 0;
}
