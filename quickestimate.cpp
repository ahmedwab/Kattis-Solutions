
#include <iostream>
#include <string>


using namespace std;

int main(){
    
    int num;
    string x;
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++){
        cin>>x;
        arr[i]=x.size();
    }
    for (int i=0;i<num;i++){
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
