class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 ||count>0){
                product*=nums[i];
            }
            else
            count++;
            
        }
        if(count==nums.size())product=0;
        vector<int>ans(nums.size(),product);
        
            if(count!=0){
                for(int i=0;i<nums.size();i++){
                    if(nums[i]!=0)
                    ans[i]=0;
            }
            
            }
            else{
                for(int i=0;i<nums.size();i++){
                    ans[i]/=nums[i];
                }
            }
            return ans;

        }
   
};