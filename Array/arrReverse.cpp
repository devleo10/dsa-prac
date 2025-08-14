#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void arrReverse(vector<int>& nums) {
        int p1 = 0, p2 = nums.size() - 1;

        while (p1 < p2) {
            swap(nums[p1], nums[p2]);
            p1++;
            p2--;
        }

        cout << "Reversed array: ";
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Sorted but not rotated
    vector<int> nums1 = {1, 2, 3, 4, 5};
    sol.arrReverse(nums1);

    // Test Case 2: Reverse sorted
    vector<int> nums2 = {5, 4, 3, 2, 1};
    sol.arrReverse(nums2);

    return 0;
}
