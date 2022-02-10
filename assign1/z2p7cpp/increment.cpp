#include <iostream>
using namespace std;
int main() {
    int a = 2; // a = 2 assign
    // a++; // a = 3 
    cout<< "value of a after increment: a="<< ++a <<endl; 
    cout<< " after cout a ="<< a << endl;

    int b=5;
    //cout<< " value of a after decrement: b= "<< b-- << endl;
    //cout<< " value of b = "<<b <<endl;
    cout<< " value of a after decrement: b= "<< --b << endl;
    cout<< " value of b = "<<b <<endl;

    int c = ++a + b ; // a=4, b=4 => c = 4 + 4 = 8
    int d = a + b-- ; // a=4, b=4 => d = 8 , b = 3
    cout<< "c = " << c << endl;
    cout<< "d = " << d << endl;
    cout<< " value of a after operation b=" <<b << endl;
    cout<< " value of a after operation a=" <<a << endl;    

    return 0;
}
