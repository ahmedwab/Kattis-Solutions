#include <iostream>
#include <cmath>



using namespace std;


int main()
{
    int cases;
    cin>>cases;
    double arr[cases];
    double temp;
    for(int i=0;i<cases;i++){
        cin>>temp;
        arr[i]=ceil(temp/400);
    }
    for(int i=0;i<cases;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
    
    
}
