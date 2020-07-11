#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

using namespace std;




int main(){
  double r;
  cin>>r;
  double c;
  cin>>c;
  c=r-c;


  cout<<fixed<<setprecision(6)<<(pow(c, 2) *PI)/(pow(r, 2) *PI)*100<<endl;


    return 0;
}
