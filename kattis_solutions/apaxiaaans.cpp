
#include <iostream>
#include <vector>

using namespace std;



int main(){
    string s;
    vector<char> k;
    cin>>s;
    
    k.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]) k.push_back(s[i]);
    }
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i];
    
    
    }
    
   
   
    return 0;
    }
