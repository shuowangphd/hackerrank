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
    int a[n],mid=n/2,res;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int le=0,r=n-1,pivot;
    while(true){
        pivot=a[le];
        int si=le;
        for(int i=le+1;i<=r;i++){
            if(a[i]<pivot){
                swap(a[i],a[++si]);
            }
        }
        swap(a[le],a[si]);
        if(si==mid)break;
        if(si<mid)le=si+1;
        else r=si-1;
    }
    cout<<pivot<<endl;
    return 0;
}
