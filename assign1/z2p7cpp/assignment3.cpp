#include <iostream>
using namespace std ;
int main() {
    int loan,rate,month,monthlyInterest,interest ;
    cout<<"Enter Loan Amount : " ;
    cin>>loan ;
    cout<<"Enter Rate :" ;	
    cin>>rate ;
    cout<<"Enter Number Of Month :" ;	
    cin>>month ;
    
    monthlyInterest = loan * rate * 0.01 ;
    interest = monthlyInterest * month ;
    cout<< "Monthly Interest :"<<monthlyInterest<<endl;
    cout<< "Your Interest is : "<<interest ;
    return 0 ;
}
