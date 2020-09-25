#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define fo(i,n) for(int i = 0; i < n; ++i)

using namespace std;

void solve(){
    vector<ll> v1;
    ll i, j;
    fo(i, 10){
        ll j;
        cin >> j;
        v1.push_back(j);
    }
    sort(v1.begin(), v1.end());
    cout << v1[1] << endl;
}

int main(){
   ll z;
   cin >> z;
   while(z--){
       solve();
   }
}