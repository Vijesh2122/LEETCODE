class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int i,j;
        for(int a=0;a<trust.size();a++){
           
                int c=trust[a][0]-1;
                int d=trust[a][1]-1;
                matrix[c][d]=1;
            
        }
        for(i=0;i<n;i++){
            int sum1=0;
            int sum2=0;
            for(j=0;j<n;j++){
                sum1+=matrix[i][j];
                sum2+=matrix[j][i];
            }
            if(sum1==0 && sum2==n-1)
            return i+1;
        }
return -1;
    }
};