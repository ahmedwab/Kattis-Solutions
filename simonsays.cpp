#include <iostream>
#include <string>
#include <vector>


using namespace std;


bool checksimon(string s){
    string simon="Simon says ";
    for(int i=0;i<simon.size();i++){
        if(s[i]!=simon[i]) return false;
    }
    return true;
    
}

int main(){
    string temp1;
    int num;
    cin>>num;
    vector<string>commands;
    getline(cin,temp1);
    for(int i=0;i<num;i++){
        getline(cin,temp1);
        
        
        if(checksimon(temp1))
        {
            string temp3(temp1.begin()+11,temp1.end());
              commands.push_back(temp3);
            
            }
            
            
           
            
        
    
        }
    
    for(int i=0;i<commands.size();i++){
        cout<<commands[i]<<endl;
    }
    return 0;
}
