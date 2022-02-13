#include <iostream>
using namespace std ;
int main() {
    int loan,rate,month,interest ;
    cout<<"Enter Loan Amount : " ;
    cin>>loan ;
    cout<<"Enter Rate :" ;	
    cin>>rate ;
    cout<<"Enter Number Of Month :" ;	
    cin>>month ;
    loan = loan ;
    rate = (loan * 10) / 100 ;
    interest = rate * month ;
    cout<< "Interest Value : "<<interest ;
    return 0 ;
}
