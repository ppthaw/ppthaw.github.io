#include <iostream>
using namespace std ;
int loan, rate, month, monthlyInterest, totalInterest, calculateInterest ;
int calculate_Interest(){
        cout<< " Enter Loan Amount : " ;
        cin>> loan ;  
        cout<< " Enter Interest Rate : " ;
        cin>> rate ; 
        cout<< " Enter Number of Month : " ;
        cin>> month ;       

        monthlyInterest = loan * rate * 0.01 ;
        totalInterest = monthlyInterest * month ;

        return calculateInterest ;
}
int main(){
    int Interest = calculate_Interest() ;
    cout<< " Monthly Interest : " << monthlyInterest << endl ;
    cout<< " Total Interest is : " << totalInterest << endl ;
    return 0 ;
}