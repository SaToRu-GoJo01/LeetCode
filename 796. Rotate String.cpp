class Solution {
public:
    bool rotateString(string str1, string str2) {
        if (str1.length() != str2.length()) {
            return false;
        }

        int len = str1.length();
            for (int i = 0; i < len; i++) {
            if (str1 == str2) {
                return true;
            }
            str1 = str1[len - 1] + str1.substr(0, len - 1);
        }

    return false;
    }
};
