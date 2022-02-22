#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std ;
int main(){
    cout<< " \n____Functions of cctype Library_____\n " ;
    cout<< " Is alpha('9') : " << isalpha('9') << endl ;
    cout<< " Is alpha('A') : " << isalpha('A') << endl ;
    cout<< " Is digit('9') : " << isdigit('9') << endl ;
    cout<< " Lower case of 'A' : " << (char) tolower('A') << endl ;

    cout<< " \n______Functions of cMath Library_______\n " ;
    cout<< " 3 power of 5 is : " << pow(3,5) << endl ;
    cout<< " square root of 36 is : " << sqrt(36) << endl ;
    cout<< " Value of sin(30) is : " << sin(30) << endl ;
    cout<< " Value of          log(10) is : " << log(10) << endl ;

    cout<< " \n______Functions of iomanip Library_______\n " ;
    cout<< " Spring" << setw(20) << " Days " << endl ;
    cout<< " Love" << setw(25) << " Yourself " << endl ;

    return 0 ;
}