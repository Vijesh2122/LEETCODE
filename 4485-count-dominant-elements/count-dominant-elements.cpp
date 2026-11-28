class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int c=0;
        if(nums.size()==1)return 1;
        if(nums[0]>=nums[1])c++;
        if(nums[nums.size()-1]>=nums[nums.size()-2])c++;
        for(int i=1;i<nums.size()-1;i++){
            if(2*nums[i]>=(nums[i-1]+nums[i+1]))c++;
        }
        return c;
    }
};