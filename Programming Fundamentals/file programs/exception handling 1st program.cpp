#include <iostream>
using namespace std;


double division(int a, int b) {
   if( b == 0 ) {
      throw "MUHAMMAD JAWAD";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(y, x);
      cerr << z << endl;
   } catch (const char* msg) {
     cout << msg << endl;
   }

   return 0;
}

