class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            if((int)word[i]<96 && (int)word[i]>64){
                c++;
            }
        }
        if(c==word.size() || c==0 || (c==1 && (int)word[0]>64 && (int)word[0]<96)){
            return true;
        }
        return false;
    }
};