#include <iostream>

using namespace std;

int main()
{
   int b = 100, t1 = 0, t2 = 1, result;
   result = t1 + t2;

   while (result <= b)
   {
       std::cout << result << "\n" ;
       t1 = t2;
       t2 = result;
       result = t1 + t2;
   }
    return 0;
}
