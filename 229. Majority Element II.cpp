class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        map<int,int> ump;
	    for(auto i:v){
		    ump[i]++;
	    }
	    int n = floor(v.size()/3);
	    vector<int> result;
	    for(auto i:ump){
		    if(n < i.second){
			    result.push_back(i.first);
		    }
	    }
        return result;
    }
};
