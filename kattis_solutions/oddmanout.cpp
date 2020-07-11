#include <iostream>
#include <algorithm>


using namespace std;





int main(){
    int size,guests,temp,temp2;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>guests;
        int pair[guests];
        for(int j=0;j<guests;j++){
            
            cin>>temp;
            pair[j]=temp;
        }
        sort(pair,pair+guests);
        for(int k=0;k<guests;k++){
            temp=pair[k];
            temp2=pair[k+1];
            if(temp!=temp2) {
                arr[i]=temp;
                break;
        }
            else k++;

        }
    }
    for(int i=0;i<size;i++){
        
        cout<<"case #"<<i+1<<": "<<arr[i]<<endl;
        
    }
    
    
    return 0;
}
