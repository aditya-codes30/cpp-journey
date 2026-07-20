// pattern-3>
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>          
using namespace std;     
void print2 (int n) {      // for input 1
  for (int i =1;i<=n;i++){     // what do you think what will happen if (int i =1;i<n;i++)
    for(int j =1;j<=i;j++){
        cout<<j;            // mistake 1- if i put n in cout then tri form will repeated input value 
    }
    cout<<endl;
  }
}
int main (){
    int t;
    cin>>t;                  // for multiple input 
    for (int i=0;i<=t;i++){
        int n;
        cin>>n;
    print2(n);}
    return 0;
}