#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,tb[100]={},a;
    cin>>n;
    while(n--){
        cin>>a;
        tb[a]++;
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<tb[i];j++)
            cout<<i<<" ";
    }
    return 0;
}
