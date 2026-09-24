class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int x=s.size()-1;
        if(s.size()==1){
            c++;
            return 1;
        }
         
        for(int i=x;i>=0;i--){

           while(!isalpha(s[x])){
                i--;
                x--;
            }
            if(s[i]==' '){
return c;
            }
            c++;

        }
        return c;
    }
};