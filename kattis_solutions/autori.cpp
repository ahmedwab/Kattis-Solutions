#include <iostream>
#include <vector>
#include <string>


using  namespace std;




    
    int main(){
        string s;
        cin>>s;
        vector<char> c;
        c.push_back(s[0]);
        for(int i=0;i<s.size();i++){
            if(s[i]=='-') c.push_back(s[i+1]);
        }
        for(int i=0;i<c.size();i++){
            cout<<c[i];
        }
        return 0;
    }
