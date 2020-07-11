#include <iostream>



using namespace std;



int main(){
    
    int x,y;
    cin>>x>>y;
    if(x<=y){
        if(y-x!=1)cout<<"Dr. Chaz will have "<<y-x<<" pieces of chicken left over!";
        else cout<<"Dr. Chaz will have 1 piece of chicken left over!";
    }
    else if(x>y &&x-y>1)cout<<"Dr. Chaz needs "<<x-y<<" more pieces of chicken!";
    else cout<<"Dr. Chaz needs 1 more piece of chicken!";
    
    return 0;
}

