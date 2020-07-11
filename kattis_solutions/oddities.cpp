#include <iostream>
#include <cmath>



using  namespace std;





int main(){
    int size;
    int x;
    cin>>size;
    int arr[size];
    
    for(int i=0;i<size;i++){
        cin>>x;
        arr[i]=x;
    }
    for(int i=0;i<size;i++){
        if(abs(arr[i])%2==1) cout<<arr[i]<<" is odd"<<endl;
        else cout<<arr[i]<<" is even"<<endl;
    }
    return 0;
}
