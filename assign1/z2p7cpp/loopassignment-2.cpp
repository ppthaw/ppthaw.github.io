#include <iostream>
using namespace std ;
int main(){
    int num1, num2, j, sum=0 ;
    cout << " Enter number : " ;
    cin >> num1 ;
    num2 = num1 ;
    while (num1 > 0) {
        j = num1 % 10 ;
        num1 = num1 / 10 ;
        sum += j ;
    }
    cout << " The sum of digit of " << num2 <<  " : " << sum << endl ;
    return 0 ;
}