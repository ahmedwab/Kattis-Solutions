#include <iostream>
#include <string>
#include <vector>


using namespace std;
vector<int>days;

bool isthere(int x){
  for(int i=0;i<days.size();i++){
    if (x==days[i]) return true;
  }
  return false;
}

int main(){
  int n;
  cin>>n;
  int count=0;
  int d1,d2;
  for(int i=0;i<n;i++){
    cin>>d1>>d2;
    for(int j=d1;j<=d2;j++){
      if (!isthere(j)) days.push_back(j);
    }
  }
  cout<<days.size()<<endl;

}
