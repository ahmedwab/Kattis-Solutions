#include <iostream>
#include <cmath>
#include<vector>



using namespace std;


bool found(string name,vector<string>teams){
    for(int i=0;i<teams.size();i++){
        if(name==teams[i])return false;
    }
    return true;
}

int main(){
    
    int size;
    string tempfirst,templast;
    cin>>size;
    vector<string>teams1;
    vector<string>teams2;
    cin>>tempfirst>>templast;
    teams1.push_back(tempfirst);
    teams2.push_back(templast);
    for(int i=0;i<size-1;i++){
        cin>>tempfirst>>templast;
        if(found(tempfirst,teams1)){
            teams1.push_back(tempfirst);
             teams2.push_back(templast);
            
        }
    }
    cout<<endl;
    for(int i=0;i<12;i++){
        cout<<teams1[i]<<" "<<teams2[i]<<endl;
    }
    
    
    return 0;
}
