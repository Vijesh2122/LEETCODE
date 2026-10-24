class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> times;

        for (string t : timePoints) {
            int h = stoi(t.substr(0, 2));
            int m = stoi(t.substr(3, 2));

            times.push_back(h * 60 + m);
        }

        sort(times.begin(), times.end());

        int ans = 1440;

        for (int i = 1; i < times.size(); i++) {
            ans = min(ans, times[i] - times[i - 1]);
        }

        ans = min(ans, 1440 - times.back() + times[0]);

        return ans;
    }
};