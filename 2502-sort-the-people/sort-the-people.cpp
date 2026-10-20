
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> a;
        vector<string> ans;

        for (int i = 0; i < names.size(); i++) {
            a.push_back({names[i], heights[i]});
        }

        sort(a.begin(), a.end(), [](pair<string, int>& x, pair<string, int>& y) {
            return x.second > y.second;
        });

        for (int i = 0; i < a.size(); i++) {
            ans.push_back(a[i].first);
        }

        return ans;
    }
};
