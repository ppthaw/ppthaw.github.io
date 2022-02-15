#include <iostream>
using namespace std;
int main() {
    // Even ODD
    int time ;
    cout<<"Enter Current Time: " ;
    cin>>time ;
    string result=(time<10)?"Good Morning!":((time<20)?"Good Day!":"Good Evening");
    cout<<result<<endl ;
    /* if (time<10){
        cout<<"Good Morning"
    }else if(time<20){
        cout<<"Good Day"
    }else{

    }*/
    return 0;
}