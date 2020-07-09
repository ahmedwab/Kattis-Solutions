#include <iostream>
#include <cmath>



using namespace std;

#define PI 3.14159265


int main(){
    
    int size;
    cin>>size;
    string arr[size];
    double t,v,angle,x,h1,h2,y;
    for(int i=0;i<size;i++){
        cin>>v>>angle>>x>>h1>>h2;
        t=(x/(v*cos ( angle* PI / 180.0 )));
        y=(v*t*sin(angle*PI/180.0))-(0.5*9.81*t*t);
        if(y>(h1+1)&&y<(h2-1)) arr[i]="Safe";
        else arr[i]="Not Safe";
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
        
       
    
    
    
    
    return 0;
}
