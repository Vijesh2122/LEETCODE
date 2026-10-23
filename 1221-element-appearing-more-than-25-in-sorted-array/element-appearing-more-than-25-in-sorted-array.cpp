class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int>ans(arr[arr.size()-1]+1,0);
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        int it=max_element(ans.begin(),ans.end())-ans.begin();
        return it;
    }
};