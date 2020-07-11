#include <iostream>




using namespace std;


void swap (int &x,int&y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
   
    int x=1,y=0,z=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A')swap(x,y);
        if(s[i]=='B')swap(y,z);
        if(s[i]=='C')swap(x,z);
    }
    if(x==1)cout<<"1";
    else if(y==1)cout<<"2";
    else if(z==1)cout<<"3";

    
   
    
    
    

    
    return 0;
}
               

