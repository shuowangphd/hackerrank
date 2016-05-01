#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    //s
    int n=s.length(),rows=floor(sqrt(n)),cols=rows;
    if(rows*rows<n)cols++;
    if(rows*cols<n)rows++;
    char ca[cols][rows+1];
    for(int i=0;i<n;i++)
        ca[i%cols][i/cols]=s[i];
    for(int i=n;i<n+cols;i++)
        ca[i%cols][i/cols]='\0';
    for(int i=0;i<cols;i++)
        cout<<ca[i]<<" ";
    //e
    return 0;
}