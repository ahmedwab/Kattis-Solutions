#include <iostream>




using namespace std;

bool isflag(int x,int y, int z){
    if(x+y==z) return true;
    int count=0;
    int r=0;
    while(count < z){
        if(r%2==0){
            count += x;
        }
        else {
            count += y;
        }
        r++;
    }
    if(count== z) return true;
    else return false;
}

int main(){
    int x;
    cin>>x;
    cout<<x<<":"<<endl;
    for(int i = 2; i<=(x/2)+1; i++){
        for(int j = i-1; j<i+1; j++){
            if(isflag(i,j,x)==true){
                cout<<i<<","<<j<<endl;
        }
    }
    }
    return 0;
}




