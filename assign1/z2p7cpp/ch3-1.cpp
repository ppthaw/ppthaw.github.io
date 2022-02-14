#include <iostream>
using namespace std;
int main() {
    int num ; 
    cout<< "Enter a number: " ;
    cin>>num ;
    if(num>=0 && num<=9){ // 1 && 0 => 0
        cout<<"You entered one digit!"<<endl ;
    }

    if(num%2){
        cout<<"You entered on Odd Number!" <<endl ;
    }else {
        cout<<"You entered on Even Number!" <<endl ;
    }
    
    return 0;
}
