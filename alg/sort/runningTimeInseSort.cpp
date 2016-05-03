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
int qSort(int n, int *  ar) {
    if(n<2)return 0;
    int pivot=ar[n-1],si=0,qshift=0;
    for(int i=0;i<n-1;i++){
        if(ar[i]<pivot){
            qshift++;
            if(si!=i) swap(ar[i],ar[si++]);
            else si++;
        }
    }
    swap(ar[si++],ar[n-1]);
    qshift++;
    int ql=qSort(si-1,ar);
    int qr=qSort(n-si,&ar[si]);
    return qshift+ql+qr;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int ar[n],ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ar2[i]=ar[i];
    }
    int shift=insertionSort(n,ar);
    int qshift=qSort(n,ar2);
    cout<<shift-qshift<<endl;
    return 0;
}