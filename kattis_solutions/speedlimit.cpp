#include <iostream>
#include <vector>





using namespace std;

int miles(int s[],int t[],int size){
    int result=0,sub=0;
    for(int i=0;i<size;i++){
        result+=s[i]*((t[i]-sub));
        sub=t[i];
    }
    return result;
}

int main(){
    int x;
    vector<int>speeds;
    while(cin>>x)
    {
        
        if(x==-1)break;
        int t,s;
        int speed[x];
        int time[x];
        for(int i=0;i<x;i++){
            cin>>s>>t;
            speed[i]=s;
            time[i]=t;
        }
        speeds.push_back(miles(speed,time,x));
        
        
    }
    cout<<endl;
    for(int i=0;i<speeds.size();i++){
        cout<<speeds[i]<<" "<<"miles"<<endl;
    }
    
    
    
    return 0;
}
