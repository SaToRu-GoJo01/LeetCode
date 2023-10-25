// class Solution {
// public:
//     int kthGrammar(int n, int k) {
//         vector<int>first;
//         vector<int>second;
//         first.push_back(0);
//         for(int i=1;i<n;i++){
//             if(i%2==0){
//                 first.clear();
//                 for(int j=0;j<second.size();j++){
//                     if(second[j] == 0){
//                         first.push_back(0);
//                         first.push_back(1);
//                     }
//                     else if(second[j] == 1){
//                         first.push_back(1);
//                         first.push_back(0);
//                     }
//                 }
//             }
//             else{
//                 second.clear();
//                 for(int j=0;j<first.size();j++){
//                     if(first[j] == 0){
//                         second.push_back(0);
//                         second.push_back(1);
//                     }
//                     else if(first[j] == 1){
//                         second.push_back(1);
//                         second.push_back(0);
//                     }
//                 }
//             }
//         }
//         if((n-1)%2 == 0){
//             return first[k-1];
//         }
//         else{
//             return second[k-1];
//         }
//     }
// };
class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1) return 0;
        int parent = kthGrammar(n-1,((k/2)+(k%2)));
        bool isOdd = (k % 2) == 1;
        if(parent == 0){
            if(isOdd) return 0;
            else return 1;
        }
        else{
            if(isOdd) return 1;
            else return 0;
        }
    }
};
