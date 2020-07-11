#include <iostream>
#include <string>
#include <vector>



using namespace std;

int dominance(char c,bool dom){
    int index=0;
    string letter="AKQJT987";
    int dominant[8]={11,4,3,20,10,14,0,0};
    int notdominant[8]={11,4,3,2,10,0,0,0};
    for(int i=0;i<8;i++){
        if(c==letter[i]){
            index=i;
            break;
        }
    }
    if(dom==true) return dominant[index];
    else return notdominant[index];
}

int main(){
    int N;
    string dominant;
    cin>>N;
    cin>>dominant;
    char x;
    string y;
    int result=0;
    for(int i=0;i<(N*4);i++){
        bool dom=false;
        cin>>x>>y;
        if(y==dominant)dom=true;
        if(dom==true){
            result+=dominance(x,true);
        }
        else{
            result+=dominance(x,false);
        }
    }
    cout<<result;
    
    return 0;
}
               

