#include<iostream>
using namespace std;
int main(){
    int start,end,i=0;
    cout<< " Enter start value : " ;
    cin>>start ;
    cout<< " Enter end value : " ;
    cin>>end ;
    while(start<=end){
        i=start ;
        start++ ;

    if(i%8==0 && i%5==0){
        cout<< " The numbers divided by 8 & 5 : " << "\n" << i << endl ;
    }else if(i%8==0){
        cout<< " The numbers divided by only 8 : " << "\n" << i << endl ;
    }else if(i%5==0){
        cout<<" The numbers divided by only 5 : " << "\n" << i << endl ;
    }else{
        cout<< " The numbers not divided by 8 & 5 : " << "\n" << i << endl ;
    }
    i++ ;     
}
    return 0 ;
}