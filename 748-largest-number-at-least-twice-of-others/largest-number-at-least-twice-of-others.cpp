class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        int sec;
        int idx = max_element(nums.begin(), nums.end()) - nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxi){
                 sec=maxi;
                maxi=nums[i];
            }
            if(nums[i]>sec && nums[i]<maxi)sec=nums[i];

        }
        if(sec==0 || maxi/sec>=2)return idx;
        return -1;
        
    }
};