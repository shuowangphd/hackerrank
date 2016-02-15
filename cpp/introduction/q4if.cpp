#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    int i;
    cin>>i;
    if(i>9)cout<<a[0];
    else cout<<a[i];
    //
    return 0;
}