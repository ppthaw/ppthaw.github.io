#include <iostream>
using namespace std;
int main() {
    bool result;
    int a=5;
    int b=6;
    result =(a<10) && (b>20); // 1 && 0 = 0
    cout<< "Result is : " << result << endl ;

    result =(a<1) || (b>2); // 0 || 1 = 1
    cout<< "Result is : " << result << endl ;
    cout<< "Not of Result is : " << !result << endl ;

    return 0;
}