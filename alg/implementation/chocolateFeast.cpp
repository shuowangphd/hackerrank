#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int cnt=n/c,w=cnt;
        while(w>=m){
            cnt+=w/m;
            w=w%m+w/m;
        }
        cout<<cnt<<endl;
    }
    return 0;
}