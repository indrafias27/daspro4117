#include <iostream>

using namespace std;

int main()
{
    for(int i=100 ; i > 0; i--){
        cout << i << endl;
        if(i == 55){
            break;
        }
    }
    return 0;
}
