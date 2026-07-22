// pattern no 2 ---
// *
// **
// ***
// ****
                             // for outer loop count the no of lines 
                             // for inner loop look for relation between line and column
#include <iostream>           //  j<=i
using namespace std;
void print2 (int n) {
  for (int i =0;i<=n;i++){
    for(int j =0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
  }
}
int main (){
    int n;
    while(
    cin>>n){
    print2(n);
     cout << "\n";}
    return 0;
}