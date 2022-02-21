#include<iostream>
using namespace std;
int main(){
  int start,end,sum=0,count=0;
  cout<< "Enter start number :";
  cin>>start;
  cout<<"Enter end number :";
  cin>> end;
  while(start<=end){
       sum=start;
      count++;
      start++;

       if(sum%8==0 && sum%5==0){
         cout<<" The numbers divisible by 8 and 5:"<< sum << endl;
      
     }else if(sum%8==0){
         cout<<"The numbers divisible by only 8 :"<< sum << endl;

     }else if(sum%5==0){
         cout<<"The numbers divisible by only 5: "<< sum << endl;

     }else{
         cout<< "The numbers not divisible by 8 and 5:"<<sum << endl;

   }sum++;
  }
    return 0;
}
