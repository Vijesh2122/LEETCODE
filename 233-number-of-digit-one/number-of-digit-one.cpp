class Solution {
public:
    int countDigitOne(int n) {
        int count=0;
        for(long long place=1;place<=n;place=place*10){
            long long high=n/(place*10);
            long long cur=(n/place)%10;
            long long low=n%place;
            if(cur==0){
                count+=high*place;
            }
            else if(cur==1){
                count+=high*place+low+1;
            }
            else{
                count+=(high+1)*place;
            }

        }
        return count;

    }
};