
#include <iostream>
#include <cmath>

const long double pi=3.141592635;
using namespace std;

int main(){
    
    int o,a;
    cin>>o>>a;
    cout<<ceil(o/sin((a*pi)/180));
    
    
    return 0;
}
