

#include <iostream>




using namespace std;

string advertise(int r,int e,int c){
    int profit=e-c;
    if(profit>r) return "advertise";
    else if (profit<r) return "do not advertise";
    else return "does not matter";

}

int main(){
    int size;
    int r,e,c;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>r>>e>>c;
        cout<<advertise(r,e,c)<<endl;
    }
    
return 0;
}
