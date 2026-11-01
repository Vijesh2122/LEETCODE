class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        int l = 0;
        int r = 0;

        while (r < s.size()) {

            auto p = find(s.begin()+l, s.begin()+r, s[r]);

            if (p == s.begin()+r) {
                r++;
            }
            else {
                l = (p - s.begin()) + 1;
            }

            maxi = max(maxi, r-l);
        }

        return maxi;
    }
};