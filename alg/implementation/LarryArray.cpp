#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0,a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            while(a[i]!=i+1){
                swap(a[a[i]-1],a[i]);
                cnt++;
            }
        }
        if(cnt%2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}