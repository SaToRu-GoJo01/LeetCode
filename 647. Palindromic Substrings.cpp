// TOP DOWN
// class Solution {
// public:
//     int memo[1001][1001];
//     bool checkPalindrome(int i,int j,string &s){
//         if(i > j) {
//             return true;
//         }
//         if(memo[i][j] != -1){
//             return memo[i][j];
//         }
//         if(s[i] == s[j]){
//             return memo[i][j] = checkPalindrome(i+1,j-1,s);
//         }
//         return memo[i][j] = false;
//     }
//     int countSubstrings(string s) {
//         int n = s.size(),result = 0;
//         memset(memo,-1,sizeof(memo));
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 if(checkPalindrome(i,j,s))
//                     result++;
//             }
//         }
//         return result;
//     }
// };

// BOTTOM UP
// class Solution {
// public:
//     int countSubstrings(string s) {
//         int n = s.size();
//         bool record[n][n];
//         int result=0;
//         memset(record,false,sizeof(record));
//         for(int length = 1;length <= n;length++){
//             for(int i = 0;i+length-1<n;i++){
//                 int j = i+length-1;
//                 if(length == 1){
//                     record[i][i] = true;
//                 }
//                 else if(length == 2){
//                     record[i][j] = s[i] == s[j];
//                 }
//                 else{
//                     if(s[i] == s[j] && record[i+1][j-1]){
//                         record[i][j] = true;
//                     }
//                 }
//                 if(record[i][j]){
//                     result++;
//                 }
//             }
//         }
//         return result;
//     }
// };

// SMART APPROACH
class Solution{
    public:
    int count;
    void check(int i,int j,int n,string&s){
        while(i >= 0 && j < n && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
    }
    int countSubstrings(string s){
        int n = s.size();
        count = 0;
        for(int i=0;i<n;i++){
            check(i,i,n,s);
            check(i,i+1,n,s);
        }
        return count;
    }
};
