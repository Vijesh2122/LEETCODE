class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Add nums2 elements into nums1
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        // Sort nums1
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();

        // Even number of elements
        if (n % 2 == 0) {
            return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
        }

        // Odd number of elements
        else {
            return nums1[n / 2];
        }
    }
};