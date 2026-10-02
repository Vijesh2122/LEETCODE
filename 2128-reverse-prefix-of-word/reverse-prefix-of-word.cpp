class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        while(word[i]!=ch && i<word.size()){
            i++;
        }
         if (i == word.size())
            return word;
        int k=0;
        int p=i;
        while(k<p){
            char temp=word[k];
            word[k]=word[p];
            word[p]=temp;
            p--;
            k++;

        }
        return word;
    }
};