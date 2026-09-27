class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child = 0;

        for(int cookie : s) {

            if(child < g.size() && cookie >= g[child]) {
                child++;
            }
        }

        return child;
    }
};