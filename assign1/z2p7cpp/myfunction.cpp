#include <iostream>
using namespace std;
void checkEven0rOdd(int num){
    if(num%2){
        cout<<num<< " is ODD! " ;
    }else{
        cout<<num<< " is EVEN! " ;
    }
}
int maim(){
    int num1=235 , num2=456 , num3=34 ;
    checkEven0rOdd(num1) ;
    checkEven0rOdd(num2) ;
    checkEven0rOdd(num3) ;
    return 0;
}