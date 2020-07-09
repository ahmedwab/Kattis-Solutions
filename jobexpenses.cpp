#include <iostream>


using namespace std;





int main(){
    int x;
    cin>>x;
    int temp;
    int total=0;
    
    for(int i=0;i<x;i++)
    {
        cin>>temp;
        if(temp<0)
            total+=temp;
    }
     
    cout<<total*-1;
    
    
}
