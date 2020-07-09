#include <iostream>
#include <vector>
#include <algorithm>




using namespace std;



int main() {
    int w,l;
    int temp;
    vector<int> rectangle;
    for(int i=0;i<4;i++){
        cin>>temp;
        rectangle.push_back(temp);
    }
    sort(rectangle.begin(),rectangle.end());
    w=rectangle[0];
    l=rectangle[2];
    cout<<w*l;
    return 0;
}
