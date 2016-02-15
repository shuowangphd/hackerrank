#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> m;
    int n,a,y;
    string x;
    cin>>n;
    while(n--){
        cin>>a>>x;
        if(a==1){
			cin>>y;
			map<string,int>::iterator itr=m.find(x);
			if(itr==m.end())m.insert(make_pair(x,y));
			else itr->second+=y;
		}else if (a==2)m.erase(x);
		else{
			map<string,int>::iterator itr=m.find(x);
			if(itr==m.end())cout<<0<<endl;
			else cout<<itr->second<<endl;
		}
    }
    //
    return 0;
}
