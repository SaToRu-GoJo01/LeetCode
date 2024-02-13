class Solution {
public:
    bool check(string s){
        int n = s.size();
        if(n == 1) return true;
        if(n == 2) return s[0] == s[1];
        int left = 0,right = n-1;
        while(left <= right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }    
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &i:words){
            if(check(i)){
                cout << check(i) << ", " << i << endl;
                return i;
            }
        }

        return "";
    }
};
