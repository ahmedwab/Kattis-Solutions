#include <iostream>
#include <string>






using namespace std;







int main(){
    string s;
    int count=0;
    cin>>s;
    if (s[0]!='P'){
        count++;
        s[0]='P';
    }
    for(int i=1;i<s.size();i++){
        if ((s[i]=='P' &&s[i-1]=='R')||(s[i]=='E' &&s[i-1]=='P')||(s[i]=='R' &&s[i-1]=='E' )) continue;
        else if (s[i-1]=='P'){
            s[i]='E';
            count++;
        }
        else if (s[i-1]=='E'){
            s[i]='R';
            count++;
        }
        else if (s[i-1]=='R'){
            s[i]='P';
            count++;
        }
        
    }
    cout<<count;
    
   
    return 0;
}

