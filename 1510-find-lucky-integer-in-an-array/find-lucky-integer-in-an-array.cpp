class Solution {
public:
    int findLucky(vector<int>& arr) {
        int c=-1;
        int m=*max_element(arr.begin(),arr.end());
            vector<int>freq(m+1,0);
            for(int i=0;i<arr.size();i++){
                freq[arr[i]]++;
            }
            for(int i=1;i<m+1;i++){
                if(i==freq[i])c=i;
            }
            return c;
    }
};