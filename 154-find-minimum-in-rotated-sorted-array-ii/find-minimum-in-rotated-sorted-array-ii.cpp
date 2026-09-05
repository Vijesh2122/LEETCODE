class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        return min;
    }
};