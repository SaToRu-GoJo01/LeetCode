class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        // string str = "123456789";
        // int count = 0;
        // int loww = low,highh = high;
        // do{
        //     low /= 10;
        //     count++;
        // }while(low != 0);
        // int nl = count;
        // count = 0;
        // do{
        //     high /= 10;
        //     count++;
        // }while(high != 0);
        // int nh = count;
        // vector<int> result;
        // while(nl <= nh){
        //     for(int i=0;i+nl-1 < str.size();i++){
        //         string sub = str.substr(i,nl);
        //         int num = stoi(sub);
        //         if(num >= loww && num <= highh){
        //             result.push_back(num);
        //         }
        //         else if(nl > nh){
        //             break;
        //         }
        //     }
        //     nl++;
        // }
        // return result;
        vector<int> result;
        for(int i=1;i<=9;i++){
            int num = i;
            int nextDigit = num+1;
            while(num <= high && nextDigit <= 9){
                num = num * 10 + nextDigit;
                if(num >= low && num <= high){
                    result.push_back(num);
                }
                else if(num > high){
                    break;
                }
                nextDigit++;
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};
