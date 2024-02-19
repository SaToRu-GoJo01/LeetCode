class Solution {
public:
    vector<int> leftMax(vector<int> height,int n){
        for(int i=1;i<n;i++){
            height[i] = max(height[i],height[i-1]);
        }
        return height;
    }
    vector<int> rightMax(vector<int> height,int n){
        for(int i=n-2;i >= 0;i--){
            height[i] = max(height[i],height[i+1]);
        }
        return height;
    }
    int trap(vector<int>& height) {
        stack<int> st;
        int n = height.size();
        vector<int> left_max = leftMax(height,n);
        vector<int> right_max = rightMax(height,n);
        int water = 0;
        for(int i=0;i<n;i++){
            water += min(left_max[i],right_max[i])-height[i];
        }
        return water;
    }
};
