#include <iostream>
using namespace std;
int main() {
    // 1 : initialize
    int i=1;
    // 2: test
    while(i<10){
        // 3 : increment
        i++ ;
        cout<< " Hello :"<< i <<endl ;
    }

    for(i=1;i<10;i++){
        cout<<" Hello : " << i << endl ;
    }
    cout<< "Value of i after for loop:" << i << endl ;
    return 0;
}