#include <iostream>
using namespace std;
int main() {
    string uName,uPass ;
    cout<< " Enter user name : " ;
    cin>>uName ;
    cout<< " Enter password : " ;
    cin>>uPass ;
    if( uName=="mmit" && uPass=="admin123" ){
        cout<< " Login Success " ;
    }else if( uName=="mmit"){
        cout<< " Password is Incorrect " ;
    }else{
        cout<< " User Name and Password do not match " ;
    }
        return 0;
}