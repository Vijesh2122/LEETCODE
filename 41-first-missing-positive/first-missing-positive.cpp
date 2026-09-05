class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long int i;
        sort(nums.begin(),nums.end());
        long long int max=*max_element(nums.begin(),nums.end());
        for(i=1;i<=max;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                 break;
            }
    }
    return i;
    }
};