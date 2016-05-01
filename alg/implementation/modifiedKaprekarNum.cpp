#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int p,q;
    cin>>p>>q;
    bool found=false;
    for(int i=p;i<=q;i++){
        long long sq=i*(long long)i;
        int div=1;
        while(div<=i) div*=10;
        if(sq/div+sq%div==i){
            cout<<i<<' ';
            found=true;
        }
    }
    if(!found)cout<<"INVALID RANGE";
    return 0;
}