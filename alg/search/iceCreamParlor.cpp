#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,m,n,f1,f2;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int arr[n];
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int tmp=m-arr[i];
            if(map.find(tmp)!=map.end()){
                f2=i+1;
                f1=map.find(tmp)->second+1;
                break;
            }
            map[arr[i]]=i;
        }
        cout<<f1<<" "<<f2<<endl;
    }
    return 0;
}