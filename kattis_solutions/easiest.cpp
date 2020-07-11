#include <iostream>
#include <vector>

using namespace std;
int sum(int x){
    int num=x, sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int getnum(int x){
    int i=11;
    while(true){
        if(sum(x)==sum(x*i)) return i;
           i++;
    }
}


int main(){
    int x;
    vector<int> y;
    while(true){
        cin>>x;
        if(x==0)break;
        y.push_back(getnum(x));
    }
    for(int i=0;i<y.size();i++){
        cout<<y[i]<<endl;
    }
    
    return 0;
}
