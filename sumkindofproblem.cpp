#include <iostream>
#include <cmath>
#include <iomanip>



using namespace std;



int main(){
    int size;
    cin>>size;
    int id[size];
    int sum1[size];
    int sum2[size];
    int sum3[size];
    int x,y;
    for(int i=0;i<size;i++){
        cin>>x>>y;
        id[i]=x;
        sum1[i]=((y*(y+1))/2);
        sum2[i]=(y*y);
        sum3[i]=(y*y)+y;
        
        
    }
    for(int i=0;i<size;i++){
        cout<<id[i]<<" "<<sum1[i]<<" "<<sum2[i]<<" "<<sum3[i]<<" "<<endl;
    }
}

