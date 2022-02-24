#include <iostream>
using namespace std ;
string cities[3] ; // global variable
// functions to accept city name
void initializeData(){
    for(int i=0;i<3;i++){
        cout<< " Enter city name : " ;
        getline(cin,cities[i]) ;
    }
}
void showData(){    
        cout<< " _______Your Cites______ " << endl ;
        for(int i=0;i<3;i++){
        cout<< cities[i] << endl ;
    }
}       
int main() {
    initializeData() ;
    showData() ;
    return 0 ;
}