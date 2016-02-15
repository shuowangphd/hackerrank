#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,ele,e2;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cin>>ele;
    v.erase(v.begin()+ele-1);
    cin>>ele>>e2;
    v.erase(v.begin()+ele-1,v.begin()+e2-1);
    n=v.size();
    cout<<n<<endl;
    for(int i=0;i<n-1;i++)cout<<v[i]<<" ";
    cout<<v[n-1]<<endl;
    //
    return 0;
}
