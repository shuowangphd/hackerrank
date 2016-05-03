#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> a(n),b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long diffMin=a[1]-a[0];
    b.push_back(a[0]);
    b.push_back(a[1]);
    for(int i=2;i<n;i++){
        long long diff=a[i]-a[i-1];
        if(diff<diffMin){
            b.clear();
            diffMin=diff;  
        }
        if(diff==diffMin){
            b.push_back(a[i-1]);
            b.push_back(a[i]);
        }
    }
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    return 0;
}