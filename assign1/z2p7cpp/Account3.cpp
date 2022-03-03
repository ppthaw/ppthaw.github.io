#include <iostream>
using namespace std ;
class Account
{
public:
    string accountHolder ;
    string accountNumber ;
    int accountBalance ;
    void createAccount(string accHolder,string accNumber){
    this->accountHolder = accountHolder ;
    this->accountNumber = accountNumber ;
        accountBalance = 1000 ;
    }
    void deposit(int depositAmount){
        accountBalance = accountBalance + depositAmount ;
}
    bool withdraw(int withdrawAmount){
        if(withdrawAmount > accountBalance){
        return false ;
    }else{
        accountBalance = accountBalance - withdrawAmount ;
        return true ;
    }
}
    void showData(){
    cout<< "\n______Current Info______" << endl ;
    cout<< "\nAccount Holder Name : " << accountHolder << endl ;
    cout<< "\nAccount Number : " << accountNumber << endl ;
    cout<< "\nAccount Balance : " << accountBalance << endl ;

    }
};
int main(){
    Account account1 ;
    account1.showData() ;
    account1.createAccount("Yan Myoe Aung","12345") ;
    account1.showData() ;
    account1.deposit(20000) ;
    cout<< " _____After Deposit_____" << endl ;
    cout<< " Balance is : " << account1.accountBalance << endl ;
    bool result = account1.withdraw(5000) ;
    if(result){
        account1.showData() ;
    }else{
        cout<< "Error to withdraw ! " << endl ;
    }
    return 0 ;
}
