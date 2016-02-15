#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int v,n,i=0,e;
    cin>>v>>n;
    while(n){
        cin>>e;
        if(v==e){cout<<i<<endl;break;}
        i++;
    }
    
    return 0;
}
