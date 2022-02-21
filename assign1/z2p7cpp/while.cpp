#include <iostream>
using namespace std;
int main() {
    // please show 10 hello world !
    int i=0; // initialize
    while(i<10){ // test to enter body
        cout<< "Hello World!" << endl;
        i++;
    }
        cout<< "Value of i after while loop:" << i << endl;
        
    int j=100;
    while(j>10){
        cout<< j << endl;
        j -= 5;
    }
    return 0;
}