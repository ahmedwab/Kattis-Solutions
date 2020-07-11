#include <iostream>
#include <iomanip>



using  namespace std;

double pi=3.14159265359;




int main(){
    double num;
    cin>>num;
    cout<<setprecision(20)<<(num*num)*pi<<endl;
    cout<<(num+num)*(num+num)/2;
    
    return 0;
}
