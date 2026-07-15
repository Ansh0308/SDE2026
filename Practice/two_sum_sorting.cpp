#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return {left, right};
            } else if (sum < target) {
                left++;
            } else {    
                right--;
            }
        }
        return {-1, -1};
    }
    
    vector<vector<int>> twoSum_print(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        set<vector<int>> resultSet; 
        for (int i = 0; i < nums.size(); i++) {
            int fi = target - nums[i];
            if (mp.find(fi) != mp.end()) {
                
                int first = min(nums[i], fi);
                int second = max(nums[i], fi);
                resultSet.insert({first, second});
            }
            mp[nums[i]] = i;
        }
        return {resultSet.begin(), resultSet.end()};
    }
};


void printResult(int testNum, const vector<int>& result) {
    cout << "Test Case " << testNum << " (Indices): [";
    if (!result.empty()) {
        cout << result[0];
        for (size_t i = 1; i < result.size(); ++i) {
            cout << ", " << result[i];
        }
    }
    cout << "]\n";
}


void printResult_twoSum(int testNum, const vector<vector<int>>& result) {
    cout << "Test Case " << testNum << " (All Pairs): [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[" << result[i][0] << ", " << result[i][1] << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n\n"; 
}

int main() {
    Solution solver;

    // Test Case 1: Standard case (One clear pair)
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    printResult(1, solver.twoSum(nums1, target1)); 
    

    // Test Case 2: Multiple distinct pairs making the same target
    vector<int> nums2 = {1, 5, 7, -1, 5, 3, 3};
    int target2 = 6;
    printResult(2, solver.twoSum(nums2, target2)); 
    
    

    // Test Case 3: Duplicates handling (Avoid printing same value pair multiple times)
    vector<int> nums3 = {2, 4, 2, 4, 2};
    int target3 = 6;
    printResult(3, solver.twoSum(nums3, target3)); 
   

    // Test Case 4: Negative numbers with multiple matches
    vector<int> nums4 = {-1, -2, -3, -4, -5, -6, -1};
    int target4 = -6;
    printResult(4, solver.twoSum(nums4, target4)); 
    

    return 0;
}
