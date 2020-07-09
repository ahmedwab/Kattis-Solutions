#include <iostream>

using namespace std;

int sum(int x){
    int sum=0;
    int num=x;
    while (num >0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int minimal(int l,int d,int x){
    for(int i=l;i<=d;i++){
        if (sum(i)==x) return i;
    }
    return d;
}
int maximal(int l,int d,int x){
    int max=0;
    for(int i=d;i>=l;i--){
        if (sum(i)==x) {
            max=i;
            break;
    }
    }
    return max;
}



int main(){
    int l,d,x;
    cin>>l>>d>>x;
    cout<<minimal(l,d,x)<<endl;;
    cout<<maximal(l,d,x);
    
    return 0;
}
