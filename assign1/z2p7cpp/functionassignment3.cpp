#include <iostream>
using namespace std ;
string itemList[5][3]= {{"101","CUP","1200"},{"102","CUP","1200"},{"103","CUP","1200"},{"104","CUP","1200"},{"105","CUP","1200"}} ;
void initializeData(){
    for(int i=0;i<5;i++){
        cout<< " Bar Code : " ;
        getline(cin,itemList[5][3]) ;
    }
}
/*void showData(){    
        cout<< " _______Your Cites______ " << endl ;
        for(int i=0;i<3;i++){
        cout<< cities[i] << endl ;
    }
} */      
int main() {
    initializeData() ;
   //showData() ;
    return 0 ;
}