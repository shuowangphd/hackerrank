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
        int nh=n/2,ht=1;
        while(nh--)
            ht=ht*2+1;
        if(n%2)ht*=2;
        cout<<ht<<endl;
    }
    return 0;
}