#include <iostream>
using namespace std;
int main() {
    float quantity,price,total,totalexpense ;
        cout<< " Enter quantity : " ;
        cin>>quantity ;
        cout<< " Enter price : " ;
        cin>>price ;
        total = quantity * price ;   

        if(total > 5000){
            totalexpense = total - (total * 0.10) ;
            cout<< " Total Expense :" <<totalexpense ;
        }else{
            cout<< " Total Expense :" <<total ;
        }
        return 0;
}
    
    
        
