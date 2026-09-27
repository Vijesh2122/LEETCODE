class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        for (int h = n; h >= 0; h--) {
            int count = 0;

            for (int c : citations) {
                if (c >= h) {
                    count++;
                }
            }

            if (count >= h) {
                return h;
            }
        }

        return 0;
    }
};