#include <iostream>
using namespace std ;
int main() {
    float proPrice,disValue,adisPrice ;
    cout<<"Enter Product Price : " ;
    cin>>proPrice ;
    cout<<"Enter Discount Value :" ;	
    cin>>disValue ;
    proPrice = proPrice ;
    disValue = (proPrice * 10) / 100 ;
    adisPrice = proPrice - disValue ;
    cout<<"After Discount Price : "<<adisPrice ;
    return 0;
}