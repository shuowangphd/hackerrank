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
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        //s
        if(y>x){
            swap(x,y);
            swap(b,w);
        }
        long long cost=min(x,y+z)*(long long)b+y*(long long)w;
        cout<<cost<<endl;
        //e
    }
    return 0;
}