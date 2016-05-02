#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void print(vector <int>  ar) {
    int n=ar.size();
    if(n==0)return;
    cout<<ar[0];
    for(int i=1;i<n;i++){
        cout<<" "<<ar[i];
    }
    cout<<endl;
}
void insertionSort(vector <int>  ar) {
    //s
    int n=ar.size();
    for(int i=1;i<n;i++){
        int tmp=ar[i];
        for(int j=0;j<i;j++){
            if(tmp<ar[j]){
                for(int k=i;k>j;k--){
                    ar[k]=ar[k-1];
                    print(ar);
                }
                ar[j]=tmp;
                print(ar);
                break;
            }
        }
    }
    //e
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
