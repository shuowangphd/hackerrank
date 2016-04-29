#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,Q,lastAns=0,i,x,y;
    cin>>N>>Q;
    vector<int> seqList[N];
    while(Q--){
        cin>>i>>x>>y;
        vector<int> &seq=seqList[(x^lastAns)%N];
        if(i==1) seq.push_back(y);
        else{
            int ns=seq.size();
            lastAns=seq[y%ns];
            cout<<lastAns<<endl;
        }
    }   
    //e
    return 0;
}