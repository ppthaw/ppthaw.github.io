#include <iostream>
using namespace std ;
class Fruit
{
public:
    string Name ;
    int price ;
    void setData(string na,int price){
        Name=na ;
        this->price=price ;
    }
    void showData(){
        cout<< " \n Name : " << Name ;
        cout<< " \n Price : " << price << endl ;
    }
};
int main(){
    Fruit fruit1 ;
    Fruit fruit2 ;

    fruit1.setData("Mango",700) ;
    fruit1.showData() ; 
    fruit1.Name="Banana" ; // update member data
    fruit1.price=900 ; // update member data
    fruit1.showData() ;     
    cout<< " \n Data of Fruit2 : " ;
    fruit2.showData() ; 
    fruit2.Name="Papaya" ;
    fruit2.price=1300 ;
    fruit2.showData() ; 
    
    return 0 ;
}