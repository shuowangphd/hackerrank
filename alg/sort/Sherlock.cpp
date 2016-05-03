#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,q,idx;
    cin>>n>>k>>q;
    k%=n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[(i+k)%n];
    while(q--){
        cin>>idx;
        cout<<a[idx]<<endl;
    }  
    return 0;
}
