

#include <iostream>
#include <vector>





using namespace std;

string s(string a, string b){
    string c;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]) c[i]='.';
            else c[i]='*';
    }
    return c;
}



int main(){
    int size=0;
    string a,b;
    cin>>size;
    for(int i=0;i<size;i++){
        
        cin>>a>>b;
        cout<<endl<<
        a<<endl<<b<<endl;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]) cout<<".";
            else cout<<"*";
        }
        cout<<endl;
        
        
    }
   
    
    
return 0;
}
