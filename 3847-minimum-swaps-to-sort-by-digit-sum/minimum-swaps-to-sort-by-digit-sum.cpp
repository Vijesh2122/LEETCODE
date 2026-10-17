class Solution {
public:

int digitsum(int n){
            int sum=0;
            while(n!=0){
                sum+=n%10;
                n=n/10;
            }
            return sum;
        }

    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>> arr;
        for(int x:nums){
            arr.push_back({digitsum(x),x});
        }
        sort(arr.begin(),arr.end());
        unordered_map<int,int> target;
        for(int i=0;i<arr.size();i++){
            target[arr[i].second]=i;
        }
        vector<bool>used(nums.size(),false);
        int swap=0;
        for(int i=0;i<nums.size();i++){
            if(used[i] || target[nums[i]]==i)continue;

            int j=i;
            int cycle=0;
            while(!used[j]){
                used[j]=true;
                j=target[nums[j]];
                cycle++;
            }
            swap+=cycle-1;

        }
        return swap;
    }
};