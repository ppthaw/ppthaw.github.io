#include <iostream>
using namespace std ;
int num1, num2, num3 ;
    int getsmallest_num(){
        cout<< " Enter any number : " ;
        cin>> num1 ;  
        cout<< " Enter any number : " ;
        cin>> num2 ; 
        cout<< " Enter any number : " ;
        cin>> num3 ;
        int smallest_num = num1 ;
        if(smallest_num>num2){
            smallest_num=num2 ;
        }
        if(smallest_num>num3){
            smallest_num=num3 ;
        }
        return smallest_num ;
    }
    int main(){
        int smallest_num = getsmallest_num() ;
        cout<< " Smallest Number is : "<< smallest_num << endl ;
        return 0 ;
}
