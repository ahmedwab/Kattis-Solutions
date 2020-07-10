#include <iostream>
#include <vector>







using namespace std;









int main()
{
    int time,count=0;
    char problem;
    string solved;
    vector<int> times;
    vector<char>problems;
    vector<string>solveds;
    while (true){
        cin>>time;
        if(time==-1)break;
        times.push_back(time);
        cin>>problem;
        problems.push_back(problem);
        cin>>solved;
        solveds.push_back(solved);
        if(solved=="right")count++;
    }
    time=0;
    for(int i=0;i<times.size();i++){
        if(solveds[i]=="right") {
            time+=times[i];
            char prblm=problems[i];
            for(int j=0;j<i;j++)
            {
                if(problems[j]==prblm) time+=20;
            }
        }
    }
    cout<<count<<" "<<time;
    return 0;
}
