#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> &a) {
   // Complete this function
    int n=a.size();
    if(n<2)return;
    int pivot=a[0];
    vector<int> al,ar;
    for(int i=1;i<n;i++){
        if(a[i]<pivot)al.push_back(a[i]);
        else ar.push_back(a[i]);
    }
    quickSort(al);
    quickSort(ar);
    int i=0;
    for(;i<al.size();i++)
        a[i]=al[i];
    a[i++]=pivot;
    for(int j=0;j<ar.size();j++)
        a[i++]=ar[j];
    cout<<a[0];
    for(int i=1;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
