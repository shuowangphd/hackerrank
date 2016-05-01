#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,a,b,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(a>b)swap(a,b);
        d=b-a;
        a*=n-1;
        b*=n-1;
        cout<<a;
        while(a<b){
            a+=d;
            cout<<' '<<a;
        }
        cout<<endl;
    }
    return 0;
}