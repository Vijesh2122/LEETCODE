class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0;
        int d=0;
             for(int i=1;i<nums.size();i++){
                if(nums[i-1]-nums[i]<=0)c++;
                if(nums[i-1]-nums[i]>=0)d++;

        }
        if(d==nums.size()-1 ||c==nums.size()-1)return true;
        return false;
        
        
       
    }
};