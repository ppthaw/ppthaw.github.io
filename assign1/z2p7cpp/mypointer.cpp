#include <iostream>
using namespace std;
int main() {
    int var1=10; // memory var1 int data type
    char var2[10]; // memory var2 char array size 10
    int *ptr1;    

    ptr1 = &var1;
    // *ptr1=var1;
    int var3= *ptr1 + 3;
    *ptr1=15;

    cout<< " Value of var3 is : " << var1 << endl;
    
    cout<< " Address of var1 : " << ptr1 << endl;
    cout<< " Value of var1 : " << *ptr1 << endl;
   
    cout<< " Address of var1 : " << &var1 << endl;
    cout<< " Address of var2 : " << &var2 << endl;

    return 0;
}