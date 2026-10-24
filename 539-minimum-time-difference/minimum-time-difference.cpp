class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int min=1440;
        for(int i=0;i<timePoints.size();i++){
            for(int j=i+1;j<timePoints.size();j++){

            
            int a=((timePoints[i][0]-'0')*10+timePoints[i][1]-'0')*60 +(timePoints[i][3]-'0')*10+timePoints[i][4]-'0';
            int b=((timePoints[j][0]-'0')*10+timePoints[j][1]-'0')*60 +(timePoints[j][3]-'0')*10+timePoints[j][4]-'0';
            int k=abs(a-b);
            if(k>720)k=1440-k;
            if(min>k )min=k;
        }
      }
      if(min>720)return 1440-min;
      return min;
    }
};