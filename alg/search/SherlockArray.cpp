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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int le=0,r=n-1,tle=0,tr=0;
        while(le<r){
            if(tle<tr)tle+=arr[le++];
            else tr+=arr[r--];
        }
        if(tle==tr)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}