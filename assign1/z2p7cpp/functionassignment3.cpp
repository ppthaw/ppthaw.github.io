#include <iostream>
using namespace std ;
string itemList[5][3] ;
int count ; 
void initializeData(){      
    cout<< " Enter number of Items : " ;
    cin>>count;
    for(int i=0;i<count;i++){
        cout<<"Enter information for Items : "<< i+1 << endl ;
        for(int j=0;j<3;j++){
            if(j==0){
                cout<<" Enter Barcode : " ;
                cin>>itemList[i][j] ;
            }else if(j==1){
                cout<<" Enter Name : " ;
                cin>>itemList[i][j] ;
            }else{
                cout<<" Enter Price : " ;
                cin>>itemList[i][j] ;
            }
        }   
    }
}
void displayitemData(){
    cout<< " \nItems information for :"<< count << "Items" << endl ;
    cout<< " \nBarcode\tName\tPrice " << endl ;
    for(int i=0;i<count;i++){
        for(int j=0;j<3;j++){
            cout<< itemList[i][j]<<"\t" ;
        }
            cout<<endl ;
    }  
}           
void searchitembyCode(){ 
string barcode ; 
cout<< " Enter Barcode which you want to find : " ;
cin>>barcode ;        
        for(int i=0;i<count;i++){
            if(barcode==itemList[i][0]){
                cout<< " \nBarcode\tName\tPrice " << endl ;
                cout<< itemList[i][0] << "\t" << itemList[i][1] << "\t" << itemList[i][2] ;
        }
                cout<< endl ;             
    }         
}
int main(){
    initializeData() ;
    displayitemData() ;    
    searchitembyCode() ;
}   

 
