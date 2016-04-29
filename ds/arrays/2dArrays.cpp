#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
//s
int sum(vector< vector<int> > &arr,int i,int j){
    int res=arr[i][j];
    for(int i2=i-1;i2<=i+1;i2+=2)
        for(int j2=j-1;j2<=j+1;j2++)
            res+=arr[i2][j2];
    return res;
}
//e
int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    //s
    int res=INT_MIN;
    for(int i=1;i<5;i++)for(int j=1;j<5;j++)
        res=max(res,sum(arr,i,j));
    cout<<res;
    //e
    return 0;
}