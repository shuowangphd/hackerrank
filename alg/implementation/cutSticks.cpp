#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.rbegin(),arr.rend());
    cout<<n<<endl;
    n--;
    while(n>0) if(arr[n--]!=arr[n]) cout<<n+1<<endl;
    return 0;
}