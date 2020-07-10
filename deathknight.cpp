#include <iostream>
#include <string>






using namespace std;






int main(){
    int size=0;
    int count=0;
    cin>>size;
    string s;
    for(int i=0;i<size;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='C'&&s[j+1]=='D')count++;
        }
    }
    cout<<size-count;
    return 0;
}

