#include <iostream>
using namespace std ;
int main() {
    float proPrice,disValue,disPrice,adisPrice ;
    cout<<"Enter Product Price : " ;
    cin>>proPrice ;
    cout<<"Enter Discount Value :" ;	
    cin>>disValue ;
    
    disPrice = proPrice * disValue * 0.01 ;
    adisPrice = proPrice - disPrice ;
    cout<<"After Discount Price : "<<adisPrice ;
    return 0;
}