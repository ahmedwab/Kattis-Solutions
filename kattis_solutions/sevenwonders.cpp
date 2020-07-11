#include <iostream>
#include <cmath>


using namespace std;

int main() {
    string x;
    cin>>x;
    int t=0,c=0,g=0,count=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='T')t++;
        if(x[i]=='C')c++;
        if (x[i]=='G')g++;
        
    }
    int num1,num2,num3;
    num1=t;
    num2=c;
    num3=g;
    for(int i=0;i<t;i++){
    if(num1>=1&&num2>=1&&num3>=1){
        count++;
        num1--;
        num2--;
        num3--;
    }
    }
    
    
    cout<<(pow(t,2)+pow(c,2)+pow(g,2))+(7*count);
    return 0;
}
