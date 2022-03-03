#include <iostream>
using namespace std;
class Account
{
private:
    string accHolder ;
    string accNumber ;
    int balance ;
public:
    Account(){
        this->accHolder="Unknown" ;
        this->accNumber="Unknown" ;
        this->balance=0 ;
    }
    Account(string accHolder,string accNumber,int amount){
        this->accHolder=accHolder ;
        this->accNumber=accNumber ;
        this->balance=amount ;
    }
    void showData(){
        cout<< accHolder << "\t" << accNumber << "\t" << balance << endl ;
    }
};
int main() {
    Account account1 ;
    Account account2("U Ba","00123",20000) ;
    Account account3=Account("U Aye","00124",5000) ;
    account1.showData() ;
    account2.showData() ;
    account3.showData() ;
    return 0;
}