#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test 1: Smallest element = " << sol.smallestElement(nums1) << endl;

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    cout << "Test 2: Smallest element = " << sol.smallestElement(nums2) << endl;

    // Test Case 3
    vector<int> nums3 = {2, 1, 3, 4};
    cout << "Test 3: Smallest element = " << sol.smallestElement(nums3) << endl;

    // Test Case 4
    vector<int> nums4 = {5, 4, 3, 2, 1};
    cout << "Test 4: Smallest element = " << sol.smallestElement(nums4) << endl;

    return 0;
}
