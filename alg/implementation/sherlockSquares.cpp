#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a,b,sa,sb;
    cin>>t;
    while(t--){
        cin>>a>>b;
        sa=ceil(sqrt(a));
        sb=floor(sqrt(b));
        cout<<sb-sa+1<<endl;
    }
    return 0;
}