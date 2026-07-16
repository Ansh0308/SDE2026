#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef unordered_map<int, int> umii;
typedef map<pii, int> mpiii;
// typedef unordered_map<umii, int> umumiii;
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

print_umii(umii &ans, int target) {
    // {1, 2}, {2, 1}, {4, 2}
    for(pii p : ans) {
        cout<<"{ "<<p.first<<", "<<(target - p.first);
        cout<<" } : "<<p.second<<'\n';
    }
}

// void print_umumiii(umumiii &m) {
//     // { 4,1} : 2, {2,3}: 1, {1,4}:2
//     for(pair<umii, int> row: m) {
//         umii p = row.first;
//         // pii tuple = p.first;
//         // int count = p.second;
//         // cout<<"{ "<<tuple.first<<", "<<tuple.second<<" } : "<<count<<"\n";
//     }
// }

void print_mpiii(mpiii &m) {
    // { 4,1} : 2, {2,3}: 1, {1,4}:2
    for(pair<pii, int> p : m) {
        cout<<"{ "<<p.first.first<<", "<<p.first.second<<" } : ";
        cout<<p.second<<"\n";
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

// umumiii get_all_unique_pairs_counts(vi &v, int target) {
//     // {4,1,2,3,1,4} : {4,1} : 2, {2,3}: 1, {1,4}:2
//     umumiii ans;
//     // unordered_map<int, int> freq;
//     // for(int x : v) {
//     //     if (freq.find(target - x) != freq.end()) {
//     //         ans[{target - x, x}] += freq[target - x];
//     //     }
//     //     freq[x]++;
//     // }
//     return ans;
// }

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

mpiii get_all_unique_pairs_counts(vi &v, int target) {
    mpiii ans;
    unordered_map<int, int> freq;
    for(int x : v) {
        if (freq.find(target - x) != freq.end()) {
            // ans[target - x] = x;
            ans[{target - x, x}] += freq[target-x];
        }
        freq[x]++;
    }
    return ans;
}

// 1 : {4, 2}, 2 : {3, 1}, 4 : {1, 2}

umii get_all_unique_pairs_grandmaster(vi &v, int target) {
    umii ans, freq;
    for(int x : v) {
        if (freq.find(target - x) != freq.end()) {
            // ans[{target - x, x}] += freq[target-x];
            ans[target - x] += freq[target - x];
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
    // umii ans = get_all_unique_pairs(v, target);
    // print_umii(ans);
    // mpiii ans = get_all_unique_pairs_counts(v, target);
    // print_mpiii(ans);
    // umumiii ans = get_all_unique_pairs_counts(v, target);
    // get_all_unique_pairs_counts(ans);
    umii ans = get_all_unique_pairs_grandmaster(v, target);
    print_umii(ans, target);
}

int main()  {
    solve();
    return 0;
}