#include <iostream>
#include <string>






using namespace std;






int main(){
    char a,b;
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y==z){
        a='+';
        b='=';
    }
    else if(x==y+z){
        a='=';
        b='+';
    }
    if(x-y==z){
        a='-';
        b='=';
    }
    else if(x==y-z){
        a='=';
        b='-';
    }
    if(x*y==z){
        a='*';
        b='=';
    }
    else if(x==y*z){
        a='=';
        b='*';
    }
    if(x/y==z){
        a='/';
        b='=';
    }
    else if(x==y/z){
        a='=';
        b='/';
    }
    cout<<x<<a<<y<<b<<z;
    
   
    return 0;
}

