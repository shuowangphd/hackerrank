#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,p=0,cnt=0;
    cin>>n>>k;
    int ti;
    for(int i=0;i<n;i++){
        cin>>ti;
        for(int j=1;j<=ti;j++){
            if(k==1 || j%k==1)p++;
            if(j==p)cnt++;  
        }
    }
    cout<<cnt<<endl;
    return 0;
}