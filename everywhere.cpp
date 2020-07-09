#include <iostream>
#include <vector>



using  namespace std;


bool check(string s,vector<string>positions){
    for(int i=0;i<positions.size();i++){
        if (s==positions[i])return false;
    }
    return true;
}



int main(){
    int size;
    string temp;
    int amount;
    cin>>size;
    int arr[size];
    int count;
    for(int i=0;i<size;i++){
        count=0;
        cin>>amount;
        string countries[amount];
        for(int j=0;j<amount;j++){
            cin>>temp;
            countries[j]=temp;
        }
        vector<string>positions;
        positions.push_back(countries[0]);
        for(int k=0;k<amount;k++){
            temp=countries[k];
            if(check(temp,positions))positions.push_back(temp);
            
        }
        arr[i]=positions.size();
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
