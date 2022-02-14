#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3,max_num ; 
    cout<<"Enter any three numbers: " ;
    cin>> num1 >> num2 >> num3 ;
    // 1 : assign first number to max
    max_num=num1 ;
    // 2 : compare second number and max : change max based on the result
    if(num2>max_num){
        max_num=num2 ;
    }
    // 3 : compare third number and max : change max based on the result
    if(num3>max_num){
        max_num=num3 ;
    }
    cout<< "The largest of "<<num1<<" , " << num2 << " and " << num3 << " is : " << max_num << endl ;
    return 0;
}