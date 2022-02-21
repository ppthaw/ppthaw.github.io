#include<iostream>
using namespace std ;
int main(){
    int zero=0,post=0,neg=0,num,count=1 ;
    while(count<=10){
        cout<< " Enter any number : " ;
        cin>> num ;  

        if( num==0 ){
            zero++ ;
        }else if( num<0 ){ 
            neg++ ;
        }else{
            post++ ;
        }
        count++;
    }    
        cout<< " \n Numbers of zero : "<< zero << " \n Numbers of positive number : " << post << " \n Numbers of negative number : " << neg << endl ;
    
    return 0 ;
}
