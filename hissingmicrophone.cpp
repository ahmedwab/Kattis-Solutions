#include <iostream>
#include <vector>
#include <string>


using  namespace std;




    
    int main(){
        string s;
        cin>>s;
        int count=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='s'&&s[i-1]=='s')count++;
        }
        if(count>=1)cout<<"hiss";
        else cout<<"no hiss";
        return 0;
    }
