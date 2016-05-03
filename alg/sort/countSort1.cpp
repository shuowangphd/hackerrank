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
    cout<<tb[0];
    for(int i=1;i<100;i++)cout<<" "<<tb[i];
    cout<<endl;
    return 0;
}
