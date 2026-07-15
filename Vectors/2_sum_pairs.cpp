#include<bits/stdc++.h>
using namespace std;

void printmatrix(vector<vector<int>> &grid)  {
    int r=grid.size();
    int c=grid[0].size();
    for(int i=0; i<r; i++)  {
        for(int j=0; j<c; j++)  {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}

void twosum(vector<int> &nums, int target)  {
    int n=nums.size();
    unordered_map<int, int> mappy;
    vector<vector<int>> ans;
    for(int i=0; i<n; i++)  {
        int comp = target-nums[i];
        if(mappy.find(comp) != mappy.end())  {
            for(int j=0;j<mappy[comp];j++){
                ans.push_back({nums[i], comp});
            }
            
                // ans.push_back({nums[i], comp});

            // cout<<nums[i]<<"\t"<<comp<<'\n';
            // ans.push_back({comp, nums[i]});    
        }
        mappy[nums[i]]++;
    }
    printmatrix(ans);
}

void solve()  {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)  {
        cin>>nums[i];
    }
    int target;
    cin>>target;    
    twosum(nums, target);
}

int main()  {
    solve();
    return 0;
}