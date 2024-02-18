class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> maxHeap;
        int n = heights.size();
        int i = 0;
        for(;i<n-1;i++){
            if(heights[i+1] <= heights[i]){
                continue;
            }
            int diff = heights[i+1] - heights[i];
            if(diff <= bricks){
                maxHeap.push(diff);
                bricks -= diff;
            }
            else if(ladders > 0){
                if(!maxHeap.empty()){
                    int top = maxHeap.top();
                    if(diff < top){
                        bricks += top-diff;
                        ladders--;
                        maxHeap.pop();
                        maxHeap.push(diff);
                    }
                    else{
                        ladders--;
                    }
                }
                else{
                    ladders--;
                }
            }
            else{
                break;
            }
        }
        return i;
    }
};
