#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i=0;
    cin>>n;
    int a[n];
    for(;i<n;i++)cin>>a[i];
    for(i--;i>0;i--)cout<<a[i]<<" ";
    cout<<a[0];
    //
    return 0;
}
