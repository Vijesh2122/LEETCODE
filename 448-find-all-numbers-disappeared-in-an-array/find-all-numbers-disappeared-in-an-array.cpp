class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> a;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                a.push_back(i);
            }
        }
        return a;
        
    }
};