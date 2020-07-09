#include <iostream>
#include <cmath>
#include <iomanip>



using namespace std;

bool possible(float a,float b,float c){
    if(a+b==c)return true;
    else if(a-b==c)return true;
    else if(b-a==c)return true;
    else if(a/b==c)return true;
    else if(b/a==c)return true;
    else if(a*b==c)return true;
    else return false;
}

int main(){
    int size;
    string s;
    cin>>size;
    float x,y,z;
    string k[size];
    for(int i=0;i<size;i++){
        cin>>x>>y>>z;
        if(possible(x,y,z)) s="Possible";
        else s="Impossible";
        k[i]=s;
    }
    for(int i=0;i<size;i++){
        cout<<k[i]<<endl;
    }
}

