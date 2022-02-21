#include <iostream>
using namespace std;
int main() {
    string uname,pass;
    tryAgain:
    cout<<" Enter user name : " ;
    cin>>uname;
    cout<<"Enter Password : " ;
    cin>>pass;
    if(uname!="mmit" || pass!="admin123"){
        cout<< "User Name or Password Error!" << endl;
        goto tryAgain;
    }
    cout<< "\nLogin Success ...!" << endl;
    return 0;
}
    