#include <iostream>
using namespace std;
int main() {
    int mark ; 
    cout<< "Enter your mark: " ;
    cin>>mark ;
    if(mark<50){
        cout<<"You Failed!"<<endl ;
    }else{
        cout<<"You Passed!" <<endl ;
    }    
    return 0;
}