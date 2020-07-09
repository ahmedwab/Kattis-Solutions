#include <iostream>



using namespace std;

int main(){
  int n;
  int x,y;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    if(y==0)cout<<x<<" 1"<<endl;
    else{
      int temp=2;
      int total=temp;
      for(int j=1;j<y;j++){
        temp++;
        total+=temp;
      }
      cout<<x<<" "<<total<<endl;
    }

  }
return 0;
}
