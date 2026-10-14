class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            int l=nums[i];
            int r=nums[i+1];
            while(l+1<r){
                ans.push_back(l+1);
                l++;
            }
        }
        return ans;

    }
};