class Solution {
public:
    bool isGood(vector<int>& nums) {
        int i;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=1;i<n;i++){
            if(nums[i-1]!=i)
            return false;
        }
        if(nums[n-1]==n-1)
        return true;
        return false;
    }
};