#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,m,x,y,s;
    queue<int> q;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int dis[n+1];
        memset(dis,-1,sizeof(dis));
        vector<int> adj[n+1];
        while(m--){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cin>>s;
        q.push(s);
        dis[s]=0;
        while(!q.empty()){
            x=q.front();
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                y=adj[x][i];
                if(dis[y]==-1){dis[y]=dis[x]+6;q.push(y);}
            }
        }
        for(int i=1;i<n;i++){
            if(i!=s)cout<<dis[i]<<" ";
        }
        cout<<dis[n]<<endl;
    }
    //
    return 0;
}
