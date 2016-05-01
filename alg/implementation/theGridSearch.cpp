#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int R,C,r,c;
bool check(vector<string> &G,vector<string> &P,int sr,int sc){
    for(int ri=0;ri<r;ri++){
        string s=G[ri+sr].substr(sc,c);
        if(s!=P[ri])return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        //s
        bool found=false;
        for(int i=0;i<=R-r;i++){
            if(found)break;
            for(int j=0;j<=C-c;j++){
                if(check(G,P,i,j)){
                    found=true;
                    break;
                }
            }           
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //e
    }
    return 0;
}