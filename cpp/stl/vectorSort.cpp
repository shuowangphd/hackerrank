#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)cout<<v[i]<<" ";
    cout<<v[n-1]<<endl;
    //
    return 0;
}
