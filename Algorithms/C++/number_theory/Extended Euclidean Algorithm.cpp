#include<bits/stdc++.h>
using namespace std;

int exgcd(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;  // x1 and y1 are solutions for the next recursive call.
    int g = exgcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}

int main(){
    int a, b; 
    cin>>a>>b;
    int x, y;
    if(a<b) swap(a,b);
    int ans = exgcd(a,b,x,y);
    cout<<ans<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}