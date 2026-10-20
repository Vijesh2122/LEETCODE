class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans,min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(min>abs(nums[i])){
                min=abs(nums[i]);
                ans=nums[i];
            }
            if(min==abs(nums[i])){
                ans=max(ans,nums[i]);
            }
        }
        return ans;
    }
    
};