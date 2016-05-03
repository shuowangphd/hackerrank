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
void partition(vector <int>  ar) {
   // Enter code for partitioning and printing here. 
    int pivot=ar[0],si=1,n=ar.size();
    for(int i=1;i<n;i++){
        if(ar[i]<pivot)swap(ar[i],ar[si++]);
    }
    swap(ar[0],ar[si-1]);
    cout<<ar[0];
    for(int i=1;i<n;i++){
        cout<<" "<<ar[i];
    }
    cout<<endl;
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

   partition(_ar);
   
   return 0;
}
