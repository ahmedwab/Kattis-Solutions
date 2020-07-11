#include <iostream>
#include <vector>

using namespace std;




int main(){
    int x=1,y=1,temp1,temp2;
    vector<int> fraction;
    vector<int>modulus;
    vector<int> yy;
    while(true){
        cin>>x>>y;
        if(x==0&&y==0)break;
        temp1=x/y;
        temp2=x%y;
        fraction.push_back(temp1);
        modulus.push_back(temp2);
        yy.push_back(y);
        
    }
    for (int i=0;i<fraction.size();i++){
        cout<<fraction[i]<<" "<<modulus[i]<<" / "<<yy[i]<<endl;
    }
    
    
    return 0;
}