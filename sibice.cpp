
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float w,h;
    int l;
    int num;
    cin>>num>>w>>h;
    float result=sqrt((w*w)+(h*h))+0.01;
    int x[num];
    for(int i=0;i<num;i++){
        cin>>l;
        x[i]=l;
    }
    for(int i=0;i<num;i++){
        if(x[i]<result) cout<<"DA"<<endl;
        else cout<<"NE"<<endl;
    }
    
    
    
    return 0;
}
