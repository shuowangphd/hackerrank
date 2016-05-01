#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    //s
    while(n--){
        char c=s[n];
        if(c>='a' && c<='z')s[n]=(c-'a'+k)%26+'a';
        else if(c>='A' && c<='Z')s[n]=(c-'A'+k)%26+'A';
    }
    cout<<s<<endl;
    //e
    return 0;
}