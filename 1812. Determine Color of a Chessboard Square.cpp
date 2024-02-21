class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(((coordinates[1]-'1'+1)+(coordinates[0]-'a'))%2 == 0) return true;
        return false;
    }
};
