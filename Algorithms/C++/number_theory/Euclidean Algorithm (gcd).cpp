// We implement the gcd function using the Euclidean formula. If we have to find the gcd of a and b then time complexity would be 
// O(log(min(a,b))). Also if one of the number is zero the gcd is defined as the other number. Thus the algorithm works for
// non negative numbers.

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    while(b>0){
        a = a%b;
        swap(a,b);
    }
    return a;
}

int main(){
    int a, b;
    cin>>a>>b;
    if(b>a) swap(a,b);
    int ans = gcd(a,b);
    cout<<ans;
    return 0;
}