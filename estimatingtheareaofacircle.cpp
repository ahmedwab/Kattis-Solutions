#include <iostream>
#include <cmath>
#include <vector>


using namespace std;


const double pi=3.141592654;
int main(){
    double r,m,c;
    vector <double> real;
    vector <double> estimate;
    while(true){
        cin>>r>>m>>c;
        if(r==0&&m==0&&c==0) break;
        real.push_back(pi*(r*r));
        estimate.push_back((c/m)*(pow(r*2,2)));
    
    }
    for(int i=0;i<real.size();i++){
        cout<<real[i]<<" "<<estimate[i]<<endl;
    }
    return 0;
}
