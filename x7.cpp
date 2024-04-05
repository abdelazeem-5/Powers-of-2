#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
   int n;
   cout << "Enter the number\n";
   cin >> n;
   cout << "[";
    for (int i = 0; i <= n; ++i)
     {
        cout << pow(2, i);
        if (i != n)
         {
          cout << ", ";
         }
     }

    cout << "]" << endl;

   return 0;
}




   

   

   
