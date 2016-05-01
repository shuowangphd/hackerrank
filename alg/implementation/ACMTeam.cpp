#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int mx=-1,nx,cnt;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cnt=0;
            for(int k=0;k<m;k++){
                if(topic[i][k]=='1'||topic[j][k]=='1')cnt++;
            }
            if(cnt>mx){
                mx=cnt;
                nx=1;
            }else if(cnt==mx) nx++;
        }
    }
    cout<<mx<<endl<<nx<<endl;
    return 0;
}