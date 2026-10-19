class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        vector<int>freq(nums.size()+1,-1);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==1){
                ans.push_back(nums[i]);

            }
        }
        return ans;
    }
};