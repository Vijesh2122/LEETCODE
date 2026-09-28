class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int l=0;
        int r=s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;

        }
    }
};