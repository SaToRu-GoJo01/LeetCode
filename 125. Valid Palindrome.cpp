class Solution {
public:
    bool isPalindrome(string s) {
        string news="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 32 && s[i] <= 47) || (s[i]>=58 && s[i]<=64)||(s[i] >= 91 && s[i] <= 96)||(s[i] >= 123 && s[i] <= 125))
            {
                // s.erase(i,1);
                // i--;
                continue;
            }
            else
            news += s[i];
            // else if(s[i] >= 65 && s[i] <= 90)
            // {
            //     s[i] = tolower(s[i]);
            // }
        }
        std::transform(news.begin(), news.end(),news.begin(), ::tolower);
        int j=news.size()-1;
        for(int i=0;i<news.size()/2;i++,j--)
        {
            if(news[i] != news[j])
            {
                return false;
            }
        }
        return true;
    }
};
