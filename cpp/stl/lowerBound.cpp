#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,e;
    cin>>n;
    vector<int> v;
    while(n--){cin>>e; v.push_back(e);}
    cin>>n;
    vector<int>::iterator low;
    while(n--){
        cin>>e;
        low=lower_bound(v.begin(),v.end(),e);
        if(e==*low)cout<<"Yes "<<low-v.begin()+1<<endl;
        else cout<<"No "<<low-v.begin()+1<<endl;
    }
    //
    return 0;
}
