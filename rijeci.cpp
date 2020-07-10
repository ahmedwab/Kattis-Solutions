#include <iostream>


using namespace std;






using namespace std;
int main(){
    int num,acount=1,bcount=0;
    cin>>num;
    for(int i=0;i<num;++i){
        int temp=acount;
        acount=bcount;
        bcount+=temp;
    }
    cout<<acount<<" "<<bcount;

    
    
    return 0;

}
