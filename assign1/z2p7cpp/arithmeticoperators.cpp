#include <iostream>
using namespace std;
int main() {
    // declare variables a,b;
    int a,b;
    // hard code!
    //a=4;
    //b=2;
    cout<< " Enter First Number: ";
    cin>>a;
    cout<< " Enter Second Number ";
    cin>>b;
    // add a and b and assign result to sum
    // binary operators => work with 2 operands !
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / b;
    int mod = a % b;
    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << sub << endl;
    cout << a << " * " << b << " = " << mul << endl;
    cout << a << " / " << b << " = " << div << endl;
    cout << a << " % " << b << " = " << mod << endl;
   
    return 0;
}
