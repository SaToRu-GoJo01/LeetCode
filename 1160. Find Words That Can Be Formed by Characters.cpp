class Solution {
public:
    bool canForm(string str,vector<int> characters){
        for(auto i:str){
            if(characters[i-'a'] != 0){
                characters[i-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> characters(26,0);
        for(auto i:chars){
            characters[i-'a']++;
        }
        int sum = 0;
        for(auto i:words){
            if(canForm(i,characters)){
                sum+=i.size();
            }
        }
        return sum;
    }
};
