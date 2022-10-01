#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &etf){
    int n = etf.size() - 1;
    for(int i = 0; i < n; i++) etf[i] = i;
    for(int i = 2; i <= n; i++){
        if(etf[i]==i){
            for(int j = i; j <=n; j+=i) etf[j] = etf[j]/i*(i-1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> etf(n+1);
    func(etf);
    int q;
    cin>>q;
    while(q--){
        cout<<"\n";
        int x; cin>>x;
        cout<<etf[x]<<endl;
    }
    return 0;
}