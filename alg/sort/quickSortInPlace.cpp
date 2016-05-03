#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void qsort(vector <int>& ar,int le,int r) {
    if(le>=r)return;
    int pivot=ar[r],si=le;
    for(int i=le;i<r;i++){
        if(ar[i]<pivot)swap(ar[i],ar[si++]);
    }
    swap(ar[r],ar[si]);
    cout<<ar[0];
    for(int i=1;i<ar.size();i++){
        cout<<" "<<ar[i];
    }
    cout<<endl;
    qsort(ar,le,si-1);
    qsort(ar,si+1,r);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,0,n-1);
    return 0;
}
