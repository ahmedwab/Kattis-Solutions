#include <iostream>
#include <string>
#include <vector>



using namespace std;
int getposition(char s){
    int index=0;
    string l="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<26;i++){
        if(s==l[i]) index=i;
}
    return index;
}


void changepos(char &s,int num){
    
    int index=getposition(s);
    int newindex=num+index;
    while(newindex>25){
        newindex=newindex-26;
    }
    string l="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    s=l[newindex];
}


int main(){
    string s;
    cin>>s;
    int firstsize=0,secondsize=0;
    vector<char>first;
    vector<char>second;
    for(int i=0;i<s.size()/2;i++){
        firstsize+=getposition(s[i]);
        first.push_back(s[i]);
    }
    for(int i=s.size()/2;i<s.size();i++){
        secondsize+=getposition(s[i]);
        second.push_back(s[i]);
    }
    
    
    for(int i=0;i<first.size();i++){
        changepos(first[i],firstsize);
    }
    for(int i=0;i<second.size();i++){
        changepos(second[i],secondsize);
    }
  
  
    
    for(int i=0;i<first.size();i++){
       changepos(first[i], getposition(second[i]));
    }
    for(int i=0;i<first.size();i++){
        cout<<first[i];
    }

    
   
    
    
    

    
    return 0;
}
               

