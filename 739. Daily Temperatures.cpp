class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //BRUTE FORCE APPROACH
        // vector<int> answer(temperatures.size(),0);
        // bool updated = false;
        // for(int i=0;i<temperatures.size();i++){
        //     for(int j=i+1;j<temperatures.size();j++){
        //         if(temperatures[i] < temperatures[j]){
        //             answer[i] = j - i;
        //             break;
        //         }
        //     }
        // }
        // return answer;

        //USING MONOTONIC STACK
        stack<int> st;
        vector<int> answer(temperatures.size(),0);
        for(int i=temperatures.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                continue;
            }
            else{
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i);
                    continue;
                }
                if(temperatures[st.top()] > temperatures[i]){
                    answer[i] = st.top() - i;
                    st.push(i);
                }
            }
        }
        return answer;
    }
};
