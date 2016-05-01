#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int v=3;
        for(;i<=j;i++){
            if(width[i]==1){
                v=1;
                break;
            }
            if(v==3 && width[i]==2)v=2;
        }
        cout<<v<<endl;
    }
    return 0;
}