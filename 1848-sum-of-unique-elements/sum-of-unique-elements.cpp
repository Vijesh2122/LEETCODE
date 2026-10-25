class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       int m=*max_element(nums.begin(),nums.end());
       vector<int>freq(m+1,0);
       int i;
       for(i=0;i<nums.size();i++){
        freq[nums[i]]++;
       } 
       int sum=0;
       for(i=1;i<=m;i++){
        if(freq[i]==1)sum+=i;
       }
       return sum;
    }
};