#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int n3=0;
        while(n>=0 && n%3!=0){
            n-=5;
            n3+=5;
        }
        if(n<0)cout<<-1<<endl;
        else {
            while(n--)cout<<5;
            while(n3--)cout<<3;
            cout<<endl;
        }     
    }
    return 0;
}