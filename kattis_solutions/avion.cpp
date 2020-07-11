#include <iostream>
#include <vector>

using namespace std;

bool isFBI(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='F' &&s[i+1]=='B'&& s[i+2]=='I') return true;
    }
    return false;
}

int main(){
    vector<int> blimps;
    string s;
    for(int i=1;i<=5;i++){
        cin>>s;
        if(isFBI(s)) blimps.push_back(i);
    }
    if(blimps.size()==0)cout<<"HE GOT AWAY!";
    else{
    for(int i=0;i<blimps.size();i++){
        cout<<blimps[i]<<" ";
    }
    }
    cout<<endl;
    
    
}
