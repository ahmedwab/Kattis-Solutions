#include <iostream>



using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}


int main(){
    int x,y,z;
    int dif1,dif2;
    int count=0;
    cin>>x>>y>>z;
    int size=z-x;
    for(int i=0;i<size;i++){
        dif2=z-y;
        dif1=y-x;
        if (dif2>dif1){
            swap(x,y);
            y=x+1;
            count++;
        }
        else if(dif1>dif2){
            swap(y,z);
            y=z-1;
            count++;
        }
        else{
            if(y+1<z)
            {
                swap(x,y);
                y=x+1;
                count++;
            }
            else if(y-1>x){
                swap(y,z);
                y=z-1;
                count++;
            }
        }
            
    
    }
    cout<<count;
    return 0;
}
