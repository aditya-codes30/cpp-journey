// pattern 4 --
// 1
// 22
// 333

#include <iostream>
using namespace std;
void print4( int n ){
    for (int i = 1; i<=n; i++){
        for ( int j = 1; j<=i; j++){
            
            cout<<i; 
        }
        cout<<endl;
        }
}
int main (){
    int n;
    while(cin>>n){
        print4(n);
        cout<<endl;
    }
    return 0;

}