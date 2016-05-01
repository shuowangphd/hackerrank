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
        cin >> n;
        int n2=n,nd,cnt=0;
        while(n2>0){
            nd=n2%10;
            n2/=10;
            if(nd==0) continue;
            if(n%nd==0) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}