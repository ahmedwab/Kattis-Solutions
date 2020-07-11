#include <iostream>
#include <vector>
#include <algorithm>




using namespace std;

int main(){

int x,y;
cin>>x>>y;
vector<int> num;
if (y<x) swap(x,y);
for(int i=x+1;i<=y+1;i++){
  num.push_back(i);
}
for(int i=0;i<num.size();i++){
  cout<<num[i]<<endl;
}


return 0;
}
