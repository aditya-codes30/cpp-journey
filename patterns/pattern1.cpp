// pattern-1        // basic-- remeber that fuction are used to execute same code multiple
// ****             // time just like void 
// ****
// ****
// ****
#include <iostream>
using namespace std;
void print1 ( int n) {                      // don't forget to define i and j data type.
   for ( int i = 0; i<n; i++){               // no variable work without defining them 
    for ( int  j = 0; j<n; j++) {cout<<"*";}
       cout<< endl; 
      }
}



int main () {
int n;
cin>> n;
print1(n);
return 0;
}