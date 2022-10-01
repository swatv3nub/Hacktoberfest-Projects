#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

#define ll long long
using u128 = __uint128_t;

ll mpow(ll a, ll n, ll p){
    u128 res = 1;
    while(n){
        if(n&1)res = (res*a)%p;
        a = ((u128)a*a)%p;
        n>>=1;
    }
    return res;
}

bool isPrime(ll x, int iter = 10){
    if(x==2 || x== 3)return true;
    for(int i = 1; i <= iter; i++){
        ll a = 2 + rand()%(x-3);
        if(mpow(a,x-1,x)!=1)return false;
    }
    return true;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        if(n>1 && isPrime(n))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}