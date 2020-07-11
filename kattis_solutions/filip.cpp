#include <iostream>

using namespace std;

void reverse(int &x){
    int result,temp1,temp2;
    result=x/100;
    temp1=((x/10)-result*10);
    result=result+(temp1*10);
    temp2=(x/10)*10;
    result=((x-temp2)*100)+result;
     x=result;
}




int main(){
    int x,y;
    int larger;
    cin>>x>>y;
    reverse(x);
    reverse(y);
    larger=x;
    if(y>x)larger=y;
    cout<<larger;
    
    
    return 0;
}
