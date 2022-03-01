#include <iostream>
using namespace std ;
string itemList[5][3] ;
int count ; 

void initializeData(){      
    cout<< " Enter number of Items : " ;
    cin>>count;
    for(int i=0;i<count;i++){
        cout<<"Enter information for Items : "<< i+1 << endl;
        for(int j=0;j<3;j++){
            if(j==0){
                cout<<" Enter Barcode : " ;
                cin>>itemList[i][j] ;
            }else if(j==1){
                cout<<" Enter Name : " ;
                cin>>itemList[i][j] ;
            }else{
                cout<<" Enter Price : " ;
                cin>>itemList[i][j];
            }
        }   
    }
}
void displayitemData(){
    cout<< " \nItems information for :"<< count << "Items" << endl ;
    cout<< " \nBarcode\tName\tPrice " << endl ;
    for(int i=0;i<count;i++){
        for(int j=0;j<3;j++){
            cout<< itemList[i][j]<<"\t";
        }
            cout<<endl;
    }               
}  
void searchitembyCode(){ 
string barcode ; 
cout<< " Enter Barcode which you want to find : " ;
cin>>barcode ;        
        if(barcode == itemList[0][0]){
        cout<< " Barcode : " << itemList[0][0] << " \tItemName : " << itemList[0][1] << " \tPrice : " << itemList[0][2] << endl ;
    }if(barcode == itemList[1][0]){
        cout<< " Barcode : " << itemList[1][0] << " \tItemName : " << itemList[1][1] << " \tPrice : " << itemList[1][2] << endl ;
    }if(barcode == itemList[2][0]){
        cout<< " Barcode : " << itemList[2][0] << " \tItemName : " << itemList[2][1] << " \tPrice : " << itemList[2][2] << endl ;
    }if(barcode == itemList[3][0]){
        cout<< " Barcode : " << itemList[3][0] << " \tItemName : " << itemList[3][1] << " \tPrice : " << itemList[3][2] << endl ;
    }if(barcode == itemList[4][0]){
        cout<< " Barcode : " << itemList[4][0] << " \tItemName : " << itemList[4][1] << " \tPrice : " << itemList[4][2] << endl ;
    }
        cout<< endl ;
}
int main(){
    initializeData() ;
    displayitemData() ;     
    searchitembyCode() ;
}   

 
