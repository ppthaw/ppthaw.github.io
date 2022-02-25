#include <iostream>
using namespace std ;
int main(){
    int count ;
    int rain_total,wind_total,temp_total ;
    float rain_avg,wind_avg,temp_avg ;
    cout<< " Enter number of months : " ;
    cin>>count ;    
    int weather_info[count+2][4] ;    
    for(int i=0;i<4;i++){
        cout<<"Enter weather information for 4Months : "<< i+1 << endl ;
        for(int j=0;j<4;j++){
                if(j==0){
                weather_info[i][j]=i+1 ;
            }else if(j==1){
                cout<<" Enter Rain : " ;
                cin>>weather_info[i][j] ;
                rain_total += weather_info[i][j] ;
                rain_avg = rain_total*1.0/count ;
            }else if(j==2){
                cout<<" Ener Wind : " ;
                cin>>weather_info[i][j] ;
                wind_total += weather_info[i][j] ;
                wind_avg = wind_total*1.0/count ;
            }else{
                cout<<" Enter Temp : " ;
                cin>>weather_info[i][j] ;
                temp_total += weather_info[i][j] ;
                temp_avg = temp_total*1.0/count ;
            }
        }
    }   
    cout<< " \nWeather information for : " << count << " Month " << endl ;
    cout<< " \nMonth\tRain\tWind\tTemp "<< endl ;
    for(int i=0;i<count;i++){
            for(int j=0;j<4;j++){
               cout<< weather_info[i][j]<< "\t" ;                 
            }        
            cout<< endl ; 
        } 
            cout<< "Total" << "\t" << rain_total << "\t" << wind_total << "\t" << temp_total ; 
            cout<< endl ; 

            cout<< "Average" << "\t" << rain_avg << "\t" << wind_avg << "\t" << temp_avg ; 
            cout<< endl ;       
        
        return 0 ;      
}    
        
            
    
        









            
      
        
