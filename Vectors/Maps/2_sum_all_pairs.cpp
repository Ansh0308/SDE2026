#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef unordered_map<int, int> umii;
// typedef pair<int, int> pii;
// typedef unordered_set<pii> uspii;

#define forn(i,n) for(int i = 0; i < n; i++)

vi input_vi() {
    int n; cin>>n;
    vi v(n);
    forn(i,n) { cin>>v[i]; }
    return v;
}


void print_vi(vi &v) {
    for(int x:v) {
        cout<<x<<"\t";
    }
    cout<<'\n';
}

void print_vvi(vvi &ans) {
    for(vi &v:ans) {
        print_vi(v);
    }
}

void print_umii(umii &ans) {
    for(pair<int, int> p : ans) {
        cout<<p.first<<'\t'<<p.second<<"\n";
    }
}

vvi get_all_pairs(vi &v, int target) {
    vvi ans;
    unordered_map<int, int> freq;
    for(int x : v) {
        if (freq.find(target - x) != freq.end()) {
            forn(count, freq[target-x]) {
                ans.push_back({target - x, x});
            }
        }
        freq[x]++;
    }
    return ans;
}

umii get_all_unique_pairs(vi &v, int target) {
    umii ans;
    unordered_map<int, int> freq;
    for(int x : v) {
        if (freq.find(target - x) != freq.end()) {
            ans[target - x] = x;
        }
        freq[x]++;
    }
    return ans;
}

void solve()  {
    vi v = input_vi();
    int target; cin>>target;
    // vvi ans = get_all_pairs(v, target);
    // print_vvi(ans);
    umii ans = get_all_unique_pairs(v, target);
    print_umii(ans);
}

int main()  {
    solve();
    return 0;
}