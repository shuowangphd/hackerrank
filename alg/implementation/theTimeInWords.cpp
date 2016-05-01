
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    //s
    string n19[21]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven", "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty"};
    if(m==0) cout<<n19[h]<<" o' clock";
    else if(m==30) cout<<"half past "<<n19[h];
    else if(m==15) cout<<"quarter past "<<n19[h];
    else if(m==45) cout<<"quarter to "<<n19[h+1];
    else if(m==1) cout<<"one minute past "<<n19[h];
    else if(m==59) cout<<"one minute to "<<n19[h+1];
    else if(m<=20) cout<<n19[m]<<" minutes past "<<n19[h];
    else if(60-m<=20) cout<<n19[60-m]<<" minutes to "<<n19[h+1];
    else if(m<30) cout<<"twenty "<<n19[m-20]<<" minutes past "<<n19[h];
    else cout<<"twenty "<<n19[40-m]<<" minutes to "<<n19[h+1];
    //e
    return 0;
}