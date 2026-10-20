class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int m=0;
         for(int i=1;i<=arr[arr.size()-1]+k;i++){
            if(!binary_search(arr.begin(),arr.end(),i))m++;
            if(m==k)return i;

         }
         return m;
    }
};