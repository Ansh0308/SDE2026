#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0; i < n; i++)

// passing by value
void print_vi(vi v) {
    // forn(i, v.size()) {
    //     cout<<v[i]<<"\t";
    // }
    for(int value:v) {
        cout<<value<<"\t";
    }
    cout<<'\n';
}

// passing by reference
void print_vi(vi &v) {
    // same
}


void solve()  {
    // vector<string> v(5, 0);
    int n; cin>>n;
    vector<int> v(n);
    for(i = 0; i < n; i++) {
        cin>>v[i];
    }
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    print_vi(v);
}

int main()  {
    solve();
    return 0;
}