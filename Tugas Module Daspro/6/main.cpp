#include <iostream>

using namespace std;

int main()
{
    string d = "input\t: ";
    int x;

    cout << d;
    cin >> x;
    int ma = x;
    int mi = x;

    while(x != -99){
        cout << d;
        cin >> x;

        if(x >= ma && x != -99){
            ma = x;
        }
        if(x <= mi && x != -99){
            mi = x;
        }
    }

     cout <<"\nNilai Maksimal\t: " << ma << "\nNilai Miimal\t: "<< mi << endl;
    return 0;
}
