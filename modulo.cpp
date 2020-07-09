#include <iostream>
#include <vector>



using namespace std;


bool isdistinct(int x,vector<int>distinct){
    for(int i=0;i<distinct.size();i++){
        if (x==distinct[i])return false;
    }
    return true;
}


int main(){
    int num,x;
    int count=1;
    vector<int>distinct;
    cin>>num;
    distinct.push_back(num%42);
    for(int i=1;i<10;i++){
        cin>>num;
        x=num%42;
        if(isdistinct(x,distinct)){
            distinct.push_back(x);
            count++;
        }
      
        
        
    }
    cout<<count;
    
    
    
    
    
    
    return 0;

}
