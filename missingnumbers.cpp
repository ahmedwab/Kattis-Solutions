#include <iostream>
#include <vector>


using namespace std;

bool isthere(int x,int arr[],int size){
    for(int i=0;i<size;i++){
        if(x==arr[i]) return true;
    }
    return false;
}



int main(){
    
    vector<int> v;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[n-1];
    int arr2[max];
    for(int i=0;i<max;i++){
        arr2[i]=i+1;
    }
    for(int i=1;i<max;i++){
        if(!isthere(i,arr,n)) v.push_back(i);
    }
    if(v.size()==0) cout<<"good job"<<endl;
    else {
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
   
    
     
    
    
    
}
