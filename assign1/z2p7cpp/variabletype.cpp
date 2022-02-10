#include <iostream>
using namespace std;
// gloabal variable a
int a=10;
const float PI=3.14;
void display(){
    int ab=20;
    cout<< "value of a inside Display function: " << a;
    a=50; // assign global inside a function
    cout<< "value of a inside Display function: " << a;
}

void displayAnother(int a){
    cout<< "\nValue of a inside another Display Function :" << a;
}

void Area(int radius){
    float area=PI * radius * radius;
    cout<< "\nArea is : "<<area;
}

int main(){
    // int a=35;
    display();
    cout<< "\nValue of a outside function: " << a;
    displayAnother(30); // 30 => a=30
    Area(12);
    // PI=3.145;
}