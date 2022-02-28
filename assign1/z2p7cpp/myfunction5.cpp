#include <iostream>
using namespace std ;
void checklogin(){
    string email ;
    string password ;
    int num ;
    input:cout<< " Enter Email : " ;
    cin>>email ;
    cout<< " Enter Password : " ;
    cin>>password ;
    if(email=="admin@gmail.com" && password=="password"){
        cout<< " Login Success! " << endl ;
    }else{
        cout<< " Login error! \n If you want to try again, please enter '1' : " ;
        cin>>num ;
        if(num==1){
            goto input ;
        }
    }
}
int main(){
    cout<< " Before invoking login function! " << endl ;
    checklogin() ;
    cout<< " After invoking login function! " << endl ;
    return 0 ;
}