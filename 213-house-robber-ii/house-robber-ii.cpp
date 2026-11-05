class Solution {
public:
    int ans(vector<int>nums,int st,int end){
        vector<int>a(nums.size());
        a[0]=nums[st];
        a[1]=max(nums[st],nums[st+1]);
        int j=2;
        for(int i=st+2;i<=end;i++){
            a[j]=max(a[j-1],a[j-2]+nums[i]);
            j++;

        }
        return a[nums.size()-2];

    }
    int rob(vector<int>& nums) {
       if(nums.size()==1)return nums[0];
       if(nums.size()==2)return max(nums[0],nums[1]);
        return max(ans(nums,0,nums.size()-2),ans(nums,1,nums.size()-1));
    }
};