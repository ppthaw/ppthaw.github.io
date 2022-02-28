#include <iostream>
using namespace std ;
int itemPrice, disValue, disPrice, afterdisPrice ;
int afterdis_Price(){
        cout<< " Enter Item Price : " ;
        cin>> itemPrice ;  
        cout<< " Enter Discount Value : " ;
        cin>> disValue ;        

        disPrice = itemPrice * disValue * 0.01 ;
        afterdisPrice = itemPrice - disPrice ;

        return afterdisPrice ;
}
int main(){
    int afterdisPrice = afterdis_Price() ;
    cout<< "After Discount Price : " << afterdisPrice << endl ;
    return 0;
}