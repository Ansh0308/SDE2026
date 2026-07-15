#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
map<vector<int>,int> twoSum_withRepetition_map(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        map<vector<int>,int> resultSet; 
        for (int i = 0; i < nums.size(); i++) {
            int fi = target - nums[i];
            if (mp.find(fi) != mp.end()) {
                
                
                resultSet[{fi, nums[i]}]++;
            }
            mp[nums[i]] = i;
        }
        return resultSet;
    }
    vector<vector<int>> twoSum_withRepetition(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        vector<vector<int>> resultSet; 
        for (int i = 0; i < nums.size(); i++) {
            int fi = target - nums[i];
            if (mp.find(fi) != mp.end()) {
                
                
                resultSet.push_back({fi, nums[i]});
            }
            mp[nums[i]] = i;
        }
        return resultSet;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int fi = target - nums[i];
            if (mp.find(fi) != mp.end()) {
                return {i, mp[fi]};
            }
            mp[nums[i]] = i;
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
                resultSet.insert({nums[i], fi});
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
void printResult_twoSumWithRepetition(int testNum, const vector<vector<int>>& result) {
    cout << "Test Case " << testNum << " (All Pairs): [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[" << result[i][0] << ", " << result[i][1] << "]";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n\n"; 
}
void printResult_twoSumWithRepetition_map(int testNum, const map<vector<int>,int>& result) {
    cout << "Test Case " << testNum << " (All Pairs): [";
    for(auto it = result.begin(); it != result.end(); ++it) {
        cout << "[" << it->first[0] << ", " << it->first[1] << "]" << " (Count: " << it->second << ")";
        auto nextIt = std::next(it);
        if (nextIt != result.end()) {
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
    // printResult(1, solver.twoSum(nums1, target1)); 
    printResult_twoSum(1, solver.twoSum_print(nums1, target1)); 
    // printResult_twoSumWithRepetition(1, solver.twoSum_withRepetition(nums1, target1));
    // printResult_twoSumWithRepetition_map(1, solver.twoSum_withRepetition_map(nums1, target1));

    // Test Case 2: Multiple distinct pairs making the same target
    vector<int> nums2 = {1, 5, 7, -1, 5, 3, 3};
    int target2 = 6;
    // printResult(2, solver.twoSum(nums2, target2)); 
    printResult_twoSum(2, solver.twoSum_print(nums2, target2)); 
    // Expected Pairs output: [[1, 5], [3, 3], [-1, 7]] 
    // printResult_twoSumWithRepetition(2, solver.twoSum_withRepetition(nums2, target2));
    // printResult_twoSumWithRepetition_map(2, solver.twoSum_withRepetition_map(nums2, target2));

    // Test Case 3: Duplicates handling (Avoid printing same value pair multiple times)
    vector<int> nums3 = {2, 4, 2, 4, 2};
    int target3 = 6;
    // printResult(3, solver.twoSum(nums3, target3)); 
    printResult_twoSum(3, solver.twoSum_print(nums3, target3)); 
    // Expected Pairs output: [[2, 4]]
    // printResult_twoSumWithRepetition(3, solver.twoSum_withRepetition(nums3, target3));
    // printResult_twoSumWithRepetition_map(3, solver.twoSum_withRepetition_map(nums3, target3));

    // Test Case 4: Negative numbers with multiple matches
    vector<int> nums4 = {-1, -2, -3, -4, -5, -7, -1};
    int target4 = -8;
    // printResult(4, solver.twoSum(nums4, target4)); 
    printResult_twoSum(4, solver.twoSum_print(nums4, target4)); 
    // Expected Pairs output: [[-5, -3], [-7, -1]]
    // printResult_twoSumWithRepetition(4, solver.twoSum_withRepetition(nums4, target4));
    // printResult_twoSumWithRepetition_map(4, solver.twoSum_withRepetition_map(nums4, target4));

    //test case 5: 
    vector<int> nums5 = {4,1,2,1,3,4};
    int target5 = 5;
    printResult_twoSum(5, solver.twoSum_print(nums5, target5));
    // printResult_twoSumWithRepetition(5, solver.twoSum_withRepetition(nums5, target5));
    // printResult_twoSumWithRepetition_map(5, solver.twoSum_withRepetition_map(nums5, target5));

    return 0;
}
