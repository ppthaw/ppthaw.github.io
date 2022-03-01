#include <iostream>
using namespace std ;
class Product
{
public:
    string barCode ;
private:
    string Name ;
    float Price ;
public:
    void showData(){
    }
};
int main(){
    Product product1 ;
    product1.barCode = "0010" ; 
   // product1.Name= "Cake" ;
  //  product1.Price = 2300 ; 
    product1.showData() ;
    return 0;
}