class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
      int a=-1000;
      int b=-1000;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                b=a;
                a=i;
                if(a-b<=k)return false;

            }
          
           
              }
              
              return true;
    }
};