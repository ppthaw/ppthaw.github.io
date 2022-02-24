#include <iostream>
using namespace std ;
string brands[5] ;
int myindex=0 ;
void addBrand(string brand){
    brands[myindex] = brand ;
    myindex++ ;
}
void showBrands(){
    for(int i = 0;i < 5;i++){
        cout<<brands[i]<<endl ;
    }
}

int main(){
    addBrand("iPhone") ;
    addBrand("Samsung") ; 
    addBrand("Oppo") ;
    addBrand("Vivo") ;
    addBrand("Huawei") ;
    showBrands() ;
    return 0 ;
}