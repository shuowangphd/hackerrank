#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,dif=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int i=0;i<n;i++)
        dif+=a[i][i]-a[i][n-1-i];
    if(dif<0)dif=-dif;
    cout<<dif<<endl;
    return 0;
}
