#include <bits/stdc++.h>
using namespace std;

typedef unordered_map<int, int> umii;
typedef pair<int,int> pii;
typedef vector<int> vi;

// class Complex {
    
// }

struct hash_pii {
    size_t operator()(const pii &p) const {
        return hash<int>{}(p.first) ^ hash<int>{}(p.second)<<1;
    }
};

namespace std{
    template<>
    struct hash<pii> {
        size_t operator()(const pii &p) const {
            return hash<int>{}(p.first) ^ hash<int>{}(p.second)<<1;
        }
    };
};


void understanding_hash() {
    // hash<int> h1;
    // cout<<h1(101)<<'\n';

    // hash<double> h;
    // cout<<h(10.1)<<"\n";

    // hash<string> h_string;
    // cout<<h_string("a")<<"\n";

    hash_pii h_pii;
    cout<<h_pii({1,2})<<'\n';

    // hash<vi> h_vector;
    // vector<int> v = {1,2,3};
    // cout<<h_vector(v)<<"\n";
}

void creating_any_map() {
    unordered_map<pii, pii> m;
    m[{1,2}] = {2,3};
    cout<<m[{1,2}].first<<'\n';
}

int main() {
    // unordered_map<int, int> m;
    // understanding_hash();
    creating_any_map();
    return 0;
}