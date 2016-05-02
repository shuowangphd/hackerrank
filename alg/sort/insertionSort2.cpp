#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void print(int n, int *  ar) {
    if(n==0)return;
    cout<<ar[0];
    for(int i=1;i<n;i++)
        cout<<" "<<ar[i];
    cout<<endl;
}
void insertionSort(int ar_size, int *  ar) {
    //s
    int n=ar_size;
    for(int i=1;i<n;i++){
        int tmp=ar[i];
        for(int j=0;j<i;j++){
            if(tmp<ar[j]){
                for(int k=i;k>j;k--)
                    ar[k]=ar[k-1];
                ar[j]=tmp;
                break;
            }
        }
        print(n,ar);
    }
    //e
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
