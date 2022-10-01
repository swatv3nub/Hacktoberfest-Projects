#include<bits/stdc++.h>
using namespace std;

#define ll long long

int mpow(int x, int y){
    ll a = x;
    ll res = 1;
    int mod = y+2;
    while(y){
        if(y&1) res = (res*a)%mod;
        a = (a*a)%mod;
        y>>=1;
    }
    return res;
}

int inverse(int a, int p){
    return mpow(a,p-2);
}


int main(){
    int a,p;  // p is a prime and a is coprime to p i.e. it is not a multiple of p
    cin>>a>>p;
    int ans = inverse(a,p);
    cout<<ans;
    return 0;
}