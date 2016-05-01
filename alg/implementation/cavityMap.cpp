#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    //s
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            char c=grid[i][j];
            if(grid[i-1][j]!='X' && grid[i][j-1]!='X' && c>grid[i-1][j] && c>grid[i][j-1] &&c>grid[i+1][j] && c>grid[i][j+1]) {
                grid[i][j]='X';
                j++;
            }
        }
    }  
    for(int grid_i = 0;grid_i < n;grid_i++)
       cout << grid[grid_i]<<endl;
    //e
    return 0;
}