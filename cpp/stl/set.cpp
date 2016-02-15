#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a==1)s.insert(b);
        else if(a==2)s.erase(b);
        else{
            set<int>::iterator itr=s.find(b);
            if(itr==s.end())cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    //
    return 0;
}
