#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,p=0,m=0,z=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)p++;
        else if(arr[arr_i]==0)z++;
        else m++;
    }
    cout<<1.*p/n<<endl;
    cout<<1.*m/n<<endl;
    cout<<1.*z/n<<endl;
    return 0;
}
