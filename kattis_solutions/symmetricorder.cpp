#include <iostream>
#include <vector>


using namespace std;


int main(){
  int n;

    int set=1;
while(cin>>n){
  if(n==0)break;
  string temp;
  string s[n];
  vector<string> ans;
  for(int i=0;i<n;i++){
      cin>>temp;
      s[i]=temp;

    }
    if(n%2!=0){
    for(int i=0;i<n;i=i+2){

      ans.push_back(s[i]);
    }
    for(int i=n-2;i>0;i=i-2){

      ans.push_back(s[i]);
    }
    cout<<"SET "<<set<<endl;
    for(int i=0;i<n;i++){

        cout<<ans[i]<<endl;
      }
    }
    else{
      for(int i=0;i<n;i=i+2){

        ans.push_back(s[i]);
      }
      for(int i=n-1;i>0;i=i-2){

        ans.push_back(s[i]);
      }
      cout<<"SET "<<set<<endl;
      for(int i=0;i<n;i++){

          cout<<ans[i]<<endl;
        }
      }
      set++;
    }
    return 0;

}
