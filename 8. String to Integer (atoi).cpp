class Solution {
public:
    int myAtoi(string s) {

        //NAIVE APPROACH
        // double num = 0;
        // int sign=1;
        // int i=0;
        // while(s[i] == ' ')
        // i++;
        // if(s[i] == '-'){
        // sign = -1;
        // i++;
        // }
        // else if(s[i] == '+')
        // {
        //     sign = 1;
        //     i++;
        // }
        // for(;i<s.size() && s[i] >= 48 && s[i] <= 57;i++)
        // {
        //     num = num*10 + (s[i]-'0');
        //     cout << num << endl;
        // }
        // if(sign*num < INT_MIN)
        // {
        //     cout << "Ran First" << endl;
        //     return INT_MIN;
        // }
        // else if(sign*num > INT_MAX)
        // {
        //     cout << "Ran Second" << endl;
        //     return INT_MAX;
        // }
        // cout << "Ran Third" << endl;
        // return num*sign;

        //Another Approach
        double num = 0;
        int sign=1;
        int i = 0;
        while(s[i] == ' ')
        {
            i++;
        }
        bool positive =  s[i] == '+';
        bool negative =  s[i] == '-';
        positive ? i++ : i;
        negative ? i++ : i;
        while(i < s.size() && s[i] >= 48 && s[i] <= 57){
            num = num*10 + (s[i ]- '0');
            i++;
        } 
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    }
};
