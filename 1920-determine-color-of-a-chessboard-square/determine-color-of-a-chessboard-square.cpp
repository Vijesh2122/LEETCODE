class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]-'a')%2==0 && (coordinates[1]-'0')%2==0 || (coordinates[0]-'a')%2!=0 && (coordinates[1]-'0')%2!=0)return true;
        return false;
    }
};