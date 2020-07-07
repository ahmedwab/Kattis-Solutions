#include <iostream>
#include <cmath>
using namespace std;





int main() {
    int num;
    int x;
    cin>>num;
    int arr1[num];
    int arr2[num];
    for(int i=0;i<num;i++){
        cin>>x;
        arr1[i]=x/10;
        arr2[i]=x%10;
        }
    int result=0;
    for(int i=0;i<num;i++){
        result+=(pow(arr1[i],arr2[i]));
    }
        
    cout<<result<<endl;
    return 0;
}
