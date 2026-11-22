class Solution {
public:
    bool checkString(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' && c==1)return false;
            if(s[i]=='b')c=1;
        }
        return true;
    }
};