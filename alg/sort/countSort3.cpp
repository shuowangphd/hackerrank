#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,tb[100]={},a;
    string s;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>s;
        tb[a]++;
    }
    cout<<tb[0];
    for(int i=1;i<100;i++){
        tb[i]=tb[i]+tb[i-1];
        cout<<" "<<tb[i];
    }
    return 0;
}
