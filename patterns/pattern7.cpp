    //  pattern no 7
    //     *      row----space/star/space 
    //    ***      1      2   / 1  /   1
    //   *****     2      1   / 3  /   2
     //            3      0   / 5  /   0
     //            n    n-i   / 2i+1/ n-i


    #include <iostream>
using namespace std;
void print7(int n){
    for(int i =1 ; i<=n ; i++){
        // space 
        for (int j=1; j<=n-i ; j++ ){
            cout<<" ";            
        }
        // star *
        for (int j=1; j<=2*i-1; j++ ){
            cout<<"*";
        }
        // space 
        for (int j=1; j<=n-i ; j++ ){
            cout<<" ";            
        }
        cout<<endl;
    }
}

int main (){
    int n;
    while(cin>>n){
        print7(n);
        cout<<endl;
    }
    return 0;

}

// basic rule for patterns--
// 1- for outer loop count no of line. 
// 2 for inner loop search for relation bitween row and column.
// 3- anything that needed to be printed should be in inner for loop. 