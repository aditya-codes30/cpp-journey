// pattern-1        // basic-- remeber that fuction are used to execute same code multiple
// ****             // time just like void 
// ****
// ****
// ****
#include <iostream>            // put the value of n= 4 to get above pattern
using namespace std;
void print1 ( int n) {                      // don't forget to define i and j data type.
   for ( int i = 0; i<n; i++){               // no variable work without defining them 
    for ( int  j = 0; j<n; j++) {cout<<"*";}
       cout<< endl; 
      }
}


int main() {
    int n;
    // This loop keeps running as long as there are numbers to read
    while (cin >> n) {
        print1(n);
        cout << "\n"; // Optional: adds a blank line between different patterns
    }
    return 0;
}

