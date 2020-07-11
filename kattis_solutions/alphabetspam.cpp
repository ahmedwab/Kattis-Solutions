#include <iostream>
#include <string>
#include <cctype>
using namespace std;



int main()
{
   
    string x;
    cin>>x;
    long double size=x.size();
    long double lower=0,upper=0,white=0,symbol=0;;
    
    for(int i=0;i<size;i++){
        if (islower(x[i])) lower++;
        else if(isupper(x[i])) upper++;
            else if(x[i]=='_') white++;
            else if (!(isalpha(x[i]))) symbol++;
    }
    cout<<white/size<<endl;
    cout<<lower/size<<endl;
    cout<<upper/size<<endl;
    cout<<symbol/size<<endl;
    
    
  

    
    return 0;
}
