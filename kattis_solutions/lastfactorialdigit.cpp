#include <bits/stdc++.h>

int factorial(int x){
    int fact=1;
    
      for(int i=1;i<=x;i++){    
      fact=fact*i;    
  }      
    return fact;
    
    
    
}


using namespace std;
int main(){
    
    
    
    int n;
    cin>>n;
    int temp;
    
    for(int i=0;i<n;i++){
        
        
        
         
         
         cin>>temp;
         cout<<factorial(temp)%10<<endl;
         
         
            
        }
    
    
    
    
    
    
    return 0;
    
}





