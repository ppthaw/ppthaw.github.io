#include <iostream>
using namespace std ;
int main() {
   int num ;
    cout<<"Enter number of days : " ;
	cin>>num ;
	int years = num / 365 ;
	int days = num % 365 ;
	int months = days / 30 ;
	days  %=  30 ;
	cout<< "Years : "<<years<<"\nMonths : "<<months<<"\nDays : "<<days ;
    return 0 ;
}
