#include <iostream>


using  namespace std;



    
    int main(){
        int num;
        cin>>num;
        double b,p;
        for(int i=0;i<num;i++){
            cin>>b>>p;
            cout<<(60*(b-1))/p<<" "<<(60*b)/p<<" "<<(60*(b+1))/p<<endl;
        }
        return 0;
    }
