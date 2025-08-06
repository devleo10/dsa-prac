#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Valid sorted + rotated array
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test 1: " << (sol.check(nums1) ? "true" : "false") << endl;  // Expected: true

    // Test Case 2: Sorted but not rotated
    vector<int> nums2 = {1, 2, 3, 4, 5};
    cout << "Test 2: " << (sol.check(nums2) ? "true" : "false") << endl;  // Expected: true

    // Test Case 3: Not sorted or rotated
    vector<int> nums3 = {2, 1, 3, 4};
    cout << "Test 3: " << (sol.check(nums3) ? "true" : "false") << endl;  // Expected: false

    // Test Case 4: Reverse sorted
    vector<int> nums4 = {5, 4, 3, 2, 1};
    cout << "Test 4: " << (sol.check(nums4) ? "true" : "false") << endl;  // Expected: false

    return 0;
}
