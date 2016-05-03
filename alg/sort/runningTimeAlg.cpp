#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int insertionSort(int n, int *  ar) {
    int shift=0;
    for(int i=1;i<n;i++){
        int tmp=ar[i];
        for(int j=0;j<i;j++){
            if(tmp<ar[j]){
                for(int k=i;k>j;k--){
                    shift++;
                    ar[k]=ar[k-1];
                }
                ar[j]=tmp;
                break;
            }
        }
    }
    return shift;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<insertionSort(n,ar)<<endl;
    return 0;
}
