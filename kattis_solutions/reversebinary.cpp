#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int reversednum(int num){
    int count=0;
    vector <int> arr;
    int remainder;
    while(num!=0)
    {
        remainder = num%2;
        arr.push_back(remainder);
        if(remainder==1)count++;
        num /= 2;
    }
    reverse(arr.begin(), arr.end());
    int mult=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1)sum+=mult;
        mult*=2;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout<<reversednum(num);
    
    return 0;
}
