class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'a' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U' || ch == 'O');
    }
    string reverseVowels(string s) {
        //NAIVE APPROACH
    //     vector<int> index;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e' || s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O'){
    //             index.push_back(i);
    //         }
    //     }
    //     if(index.size() > 1){
    //         int last = index.size() - 1;
    //         int first = 0;
    //         while(first < last){
    //             swap(s[index[first++]],s[index[last--]]);
    //         }
    //     }
    //     return s;
    // }
        int start = 0,end = s.length()-1;
        while(start < end){
            while(!isVowel(s[start]) && start < end){
                start++;
            }
            while(!isVowel(s[end]) && start < end){
                end--;
            }
            swap(s[start++],s[end--]);
        }
        return s;
    }
};
