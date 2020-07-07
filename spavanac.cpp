#include <iostream>


using  namespace std;

void clock(int x,int y){
    
    y += 15;
    if(y/60 == 0){
        x -= 1;
    } else {
        y= y % 60;
    }
    if(x < 0){
        x += 24;
    }
    cout << x<< " " << y;
}

int main() {
    int x,y;
    cin>>x>>y;
    
    clock(x,y);
    
return 0;
}
