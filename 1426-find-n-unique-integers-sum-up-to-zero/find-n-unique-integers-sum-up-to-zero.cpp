class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int k=1;
        while(n>0){
            if(n%2==1){
                ans.push_back(0);
                n--;
            }
            else{
            ans.push_back(k);
            ans.push_back(-1*k);
            k++;
            n-=2;
            }
        }
        return ans;
    }
};