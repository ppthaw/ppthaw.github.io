#include <iostream>
using namespace std;
class Base{
private:
    int x ;
    int y ;
public:
    Base(){
        cout<< " \nThis is base without parameters! " ;
    }
    Base(int x,int y){
        cout<< " \nThis is base with parameters! " ;
        this->x=x ;
        this->y=y ;
    }
};
class Derived:public Base{
private:
    int z ;
public:
    Derived(){
        cout<< " This is derived wihtout parameters! " ;        
    }
    Derived(int i,int j,int k):Base(i,j){
        cout<< " This is derived with parameters! " ;
        //Base(i,j) ;
        this->z=k ;
    }
};
int main(){
    Derived d1 ;
    Derived d2=Derived(1,2,3) ;
    return 0 ;
}