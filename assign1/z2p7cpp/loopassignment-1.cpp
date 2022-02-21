#include<iostream>
using namespace std ;
int main(){
    int zero=0,post=0,neg=0,num,count=1 ;
    while(count<=10){
        cout<< " Enter any number : " ;
        cin>> num ;  
        if( num==0 ) zero++ ;
        if( num<0 ) neg++ ;-69
        if( num>0 ) post++ ;
        count++;
    }
        cout<< " Numbers of zero : "<< zero << " \n Numbers of positive number : " << post << " \n Numbers of negative number : " << neg << endl ;
    
    return 0 ;
}
