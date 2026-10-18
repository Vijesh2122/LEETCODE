class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int>ans={0,0};
        for(int i=0;i<moves.size();i++){
            char ch=moves[i];
            switch(ch){
            case 'U':
            ans.first++;
            break;
            case 'D':
            ans.first--;
            break;
            case 'L':
            ans.second--;
            break;
            case 'R':
            ans.second++;
            break;
            }

        }
        return (ans.first==0 && ans.second==0)?true:false;
    }
};