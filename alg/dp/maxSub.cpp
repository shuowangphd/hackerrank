#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,sc,sn,msc,e,mx;
    cin>>t;
    while(t--){
        sc=sn=msc=0;
        mx=INT_MIN;
        cin>>n;
        while(n--){
            cin>>e;
            mx=max(mx,e);
            sc+=e;
            if(sc<0)sc=0;
            else msc=max(msc,sc);
            if(e>0)sn+=e;
        }
        if(mx<0)msc=sn=mx;
        cout<<msc<<" "<<sn<<endl;
    }
    //
    return 0;
}
