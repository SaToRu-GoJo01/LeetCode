class Solution {
public:
    string longestCommonPrefix(vector<string>& arr){
	string str = arr[0];
    for(int i = 1;i<arr.size();i++){
        string extra = arr[i];
        for(int j=0;j<str.size();j++){
            if(str[j] != extra[j]){
                str.erase(j);
                break;
            }
        }
    }
    return str.size()>0?str:"";
}

};
