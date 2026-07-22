// pattern-3>
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>          
using namespace std;     

void print3(int n) {      
    for (int i = 1; i <= n; i++) {    
        for (int j = 1; j <= i; j++) {
            cout << j;            
        }
        cout << endl;
    }
}

int main (){
    int n;
    while(
    cin>>n){
    print3(n);
     cout << "\n";}
    return 0;
}