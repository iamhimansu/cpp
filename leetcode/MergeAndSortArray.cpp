#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {

        int i = m - 1;    // 3-1 = 2
        int j = n - 1;    // 3-1 = 2
        int k = m + n - 1;// 3+3 - 1 =z 6-1 = 5

        while (j >= 0) {
            if (i >= 0 && (nums1[i] > nums2[j])) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        for (auto x: nums1) {
            std::cout << x << std::endl;
        }
    }
};

int main() {
    Solution s;
    std::vector<int> nums1{0};
    std::vector<int> nums2{1};
    s.merge(nums1, 0, nums2, 1);
}