
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        long long k = 1LL * k1 + k2;

        vector<int> freq(100001, 0);
        int maxi = 0;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            maxi = max(maxi, d);
            total += d;
        }

        if (k >= total)
            return 0;

        for (int d = maxi; d > 0 && k > 0; d--) {
            int cnt = freq[d];

            if (k >= cnt) {
                freq[d - 1] += cnt;
                freq[d] = 0;
                k -= cnt;
            }
            else {
                freq[d] -= k;
                freq[d - 1] += k;
                k = 0;
            }
        }

        long long sum = 0;

        for (int d = 1; d <= maxi; d++) {
            sum += 1LL * d * d * freq[d];
        }

        return sum;
    }
};
