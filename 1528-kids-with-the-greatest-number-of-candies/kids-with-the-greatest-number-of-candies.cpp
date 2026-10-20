class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),true);
        int maxi=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(maxi>candies[i]+extraCandies)ans[i]=false;
        }
        return ans;
    }
};