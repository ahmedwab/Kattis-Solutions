#include <iostream>


using  namespace std;




int main(){
    int a,b,c,d;
    int contestant=1;
    cin>>a>>b>>c>>d;
    int points=a+b+c+d;
    int newpoints;
    for(int i=2;i<=5;i++){
        cin>>a>>b>>c>>d;
        newpoints=a+b+c+d;
        if(newpoints>points){
            points=newpoints;
            contestant=i;
        }
    }
    
    cout<<endl<<contestant<<" "<<points;
    return 0;
}

