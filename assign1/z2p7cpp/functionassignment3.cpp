#include <iostream>
using namespace std ;
string itemList[5][3] ;
int count ; 
void initializeData(){      
    cout<< " Enter number of Items : " ;
    cin>>count;
    for(int i=101;i=105;i++){
        cout<<"Enter information for Items : "<< 101 << endl;
        for(int j=0;j<3;j++){
            if(j==0){
                itemList[i][j]= 101 ;
            }else if(j==1){
                cout<<" Enter Name : " ;
                cin>>itemList[i][j];
            }else{
                cout<<" Enter Price : " ;
                cin>>itemList[i][j];
            }
        }
    }    
}
int main(){
    void initializeData() ;
}