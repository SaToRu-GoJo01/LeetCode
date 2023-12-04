class Solution {
public:
    string largestGoodInteger(string n) {
        int largest = INT_MIN;
        string result="";
        for(int i=1;i<n.size()-1;i++){
            if(n[i] == n[i-1] && n[i+1] == n[i]){
                if(largest < n[i]-'0'){
                    result = n.substr(i-1,3);
                    largest = n[i]-'0';
                }
            }
        }
        return result;
    }
};
